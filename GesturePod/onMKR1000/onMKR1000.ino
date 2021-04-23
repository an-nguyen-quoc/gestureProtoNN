/*
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT license.
 * 
 * ============================
 * Connections to BLE
 * ============================
 * MKR1000   --------->    HM10
 * VCC                     VCC
 * GND                     GND
 * 0                       RX
 * 1                       TX
 * 
 * Connections to MPU6050 using I2C protocol.
 */

/*
 * Parts of this code are borrowed from Jeff Rowberg's I2Cdev device library.
 * Below are the terms of license for I2Cdev device library:
 */

/*
 * I2Cdev device library code is placed under the MIT license
 * Copyright (c) 2012 Jeff Rowberg
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#include <time.h>
#include "config.h"
#include "src/protoNN.h"
#include "src/featurizer.h"
#include "src/utils.h"

// include Arduino.h before wiring_private.h
#include <Arduino.h>   

/* Arduino Wire library is required if I2Cdev
 * I2CDEV_ARDUINO_WIRE implementation is used
 * in I2Cdev.h
 */

#include "Wire.h"

#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>


Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);
const int WINDOWS = 8;
const int INDEX_MAX_LABEL = 5;
const int THUMB = A0; //pin A0 to read analog input
const int INDEX_FINGER = A1;
const int MIDDLE_FINGER = A2;
const int RING_FINGER = A3;
const int PINKIE = A4;

//Variables:
int thumb_value;
int ind_finger_value;
int mid_finger_value;
int ring_finger_value;
int pinkie_value;
float acc_X;
float acc_Y;
float acc_Z;

// To debug BLE
// #define __DEBUG_BLE__

FIFOCircularQ<float, WINDOWS> norm_Ngon_1, norm_Ngon_2, norm_Ngon_3, norm_Ngon_4, norm_Ngon_5; 
FIFOCircularQ<float, WINDOWS> normX, normY, normZ;
/* Featurizer class constructor
 * Set of hand crafted features for gesture recognition with IMU data - EdgeML
 */
Featurizer featurizer(BUCKET_WIDTH, &norm_Ngon_1, &norm_Ngon_2, &norm_Ngon_3, &norm_Ngon_4, &norm_Ngon_5, &normX, &normY, &normZ);
/* ProtoNN class constructor. 
 * ProtoNN is a Multi-class classification algorithm - EdgeML
 */
ProtoNNF predictor1;
// Voting class constructor takes as input the (index of max no of labels + 1)
Vote Vote1(INDEX_MAX_LABEL + 1);

int VOTE_RESULT;
int COUNT_AFTER_RESET;


/* 
 * Used for min-max normalization.
 * These values may have to be changed depending on MPU
 * Values defined in config.h
 */
bool FLAG_FIRST_WINDOWLENGTH = false; 

time_t CURRENT_TIME, LAST_SENT_TIME, START_TIME;
 
/* Used for min-max normalization.
 * These values may have to be changed depending on MPU
 * Values defined in config.h
 */
Vector3D<float> normAcc;
Vector5D<float> normNgon;
Vector5D<int> minNgon(MIN_NGON_1, MIN_NGON_2, MIN_NGON_3, MIN_NGON_4, MIN_NGON_5);
Vector5D<int> maxNgon(MAX_NGON_1, MAX_NGON_2, MAX_NGON_3, MAX_NGON_4, MAX_NGON_5);
Vector3D<float> minAcc(MIN_X, MIN_Y, MIN_Z);
Vector3D<float> maxAcc(MAX_X, MAX_Y, MAX_Z);

const int L = 5;
int scores[L];
// Gestures are mapped to classes - Do not change ordering!
const char *GESTURE_TO_COMMUNICATE[INDEX_MAX_LABEL] = {"", "A", "B", "C", "D"};
// Function Signature
int featurize_and_predict(int ngon_1, int ngon_2, int ngon_3, int ngon_4, int ngon_5, float acc_x, float acc_y, float acc_z);

void setup() {
    bool initSuccess = true;
    
    Serial.begin(9600);
    Serial.print(BAUD_RATE);
    delay(2000);
     Serial.print("before get error code");
    if (predictor1.getErrorCode()){
        Serial.print("ProtoNNF initialization failed with code ");
        Serial.println(predictor1.getErrorCode());
        initSuccess = false;
    }

     Serial.print("after get error code");
    
    if(!accel.begin())
  {
    /* There was a problem detecting the ADXL345 ... check your connections */
    Serial.println("Ooops, no ADXL345 detected ... Check your wiring!");
    while(1);
  }
  else
  {
     Serial.println("True!");
  }

  accel.setRange(ADXL345_RANGE_16_G);
  START_TIME = millis();


    COUNT_AFTER_RESET = 0;
    VOTE_RESULT = 1;
    LAST_SENT_TIME = time(NULL);

    

}

void loop() {
  sensors_event_t event; 
//        Serial.print(millis());
//        Serial.println("loop");
        if ((millis() - START_TIME) % 100 == 0)
        {
//        Serial.println("get data");
  
  accel.getEvent(&event);
  thumb_value = analogRead(THUMB);         //Read and save analog value from potentiometer
  ind_finger_value = analogRead(INDEX_FINGER);
  mid_finger_value = analogRead(MIDDLE_FINGER);
  ring_finger_value = analogRead(RING_FINGER);
  pinkie_value = analogRead(PINKIE);

  
  acc_X = event.acceleration.x;
  acc_Y = event.acceleration.y;
  acc_Z = event.acceleration.z;
//  Serial.print(thumb_value);
//  Serial.print("   ");
//   Serial.print(ind_finger_value);
//   Serial.print("   ");
//    Serial.print(mid_finger_value);
//    Serial.print("   ");
//     Serial.print(ring_finger_value);
//     Serial.print("   ");
//     Serial.print(pinkie_value);
//Serial.print("   ");
//      Serial.print(acc_X);
//      Serial.print("   ");
//       Serial.print(acc_Y);
//       Serial.print("   ");
//        Serial.print(acc_Z);
//        Serial.print("   ");
  
  if(featurize_and_predict(thumb_value, ind_finger_value, mid_finger_value, ring_finger_value, pinkie_value, acc_X, acc_Y, acc_Z)){
            Serial.print("Error in featuring and predicting\n");
//            break;
        }

        }
    /* format of feature vector:[indexPosEdge, countPosEdge, countNegEdge,
     * indexNegEdge, ax(20buckets), ay(20buckets), az(20buckets),
     * gx(20buckets), gy(20buckets), gz(20buckets)]
     */
    
    
}


int featurize_and_predict(int ngon_1, int ngon_2, int ngon_3, int ngon_4, int ngon_5, float acc_x, float acc_y, float acc_z){
    COUNT_AFTER_RESET++;
    // Converting values to vectors for consistency
    Vector3D<float> acc(acc_x, acc_y, acc_z);
    Vector5D<int> ngon(ngon_1, ngon_2, ngon_3, ngon_4, ngon_5);
    minMaxNormalize(&acc, &minAcc, &maxAcc, &normAcc);
    minMaxNormalize(&ngon, &minNgon, &maxNgon, &normNgon);
    norm_Ngon_1.forceAdd(normNgon.data_1);
    norm_Ngon_2.forceAdd(normNgon.data_2);
    norm_Ngon_3.forceAdd(normNgon.data_3);
    norm_Ngon_4.forceAdd(normNgon.data_4);
    norm_Ngon_5.forceAdd(normNgon.data_5);

    normX.forceAdd(normAcc.x);
    normY.forceAdd(normAcc.y);
    normZ.forceAdd(normAcc.z);
    // Wait till first window is full
    if (!FLAG_FIRST_WINDOWLENGTH){
        if(COUNT_AFTER_RESET % (STRIDE * NUM_BUCKETS) == 0)
            FLAG_FIRST_WINDOWLENGTH = true;
        return 0;
    }
    // If not STRIDE steps then return 
    if ((COUNT_AFTER_RESET % STRIDE) != 0)
     {
        return 0;
     } 
    // If STRIDE length then featurize and predict 
    /* format of feature vector:[indexPosEdge, countPosEdge, countNegEdge,
     * indexNegEdge, ax(20buckets), ay(20buckets), az(20buckets),
     * gx(20buckets), gy(20buckets), gz(20buckets)]
     */
    int featureVector[FEATURE_LENGTH]={0}; 
    float featureVectorF[FEATURE_LENGTH]={0}; 
    int featureStatus = featurizer.featurize(featureVector); 
    // Since predictor expects a float type. 
    // But feature computation with floats is expensive.
    for(int i = 0; i < FEATURE_LENGTH; i++){
        featureVectorF[i] = featureVector[i];
    }
    int result = predictor1.predict(featureVectorF, 
                                    FEATURE_LENGTH, 
                                    scores);
    
    // Printing of Scores to Console
    Serial.print("Result: "); //Serial.print(result);
//        Serial.print(",Score:") ; Serial.print(scores[result]);Serial.print(",");
 // Voting to get rid of stray gestures
    Vote1.forcePush(result);
    VOTE_RESULT = Vote1.result();
//   Serial.print(" Vote Result: "); Serial.println(VOTE_RESULT);
    
    Serial.println(result);
    return 0;
}

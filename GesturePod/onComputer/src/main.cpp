/*
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT license.
 * 
 * GesturePod simulation: Bare bones code to play with on your unix system, with
 *  preloaded sensor values.
 */
#include <iostream>
#include <iomanip>
#include <cstdint>
#include <fstream>
#include <ctime>
#include "config.h"
#include "featurizer.h"
#include "protoNN.h"
#include "utils.h"

/* Data file to load the data
 * the data needs to be space separated N X 6 integers
 */
#define DATA_FILE "./data/tests.txt"

FIFOCircularQ<float, 10> norm_Ngon_1, norm_Ngon_2, norm_Ngon_3, norm_Ngon_4, norm_Ngon_5; 
FIFOCircularQ<float, 10> normX, normY, normZ;
/* Featurizer class constructor
 * Set of hand crafted features for gesture recognition with IMU data - EdgeML
 */
Featurizer featurizer(BUCKET_WIDTH, &norm_Ngon_1, &norm_Ngon_2, &norm_Ngon_3, &norm_Ngon_4, &norm_Ngon_5, &normX, &normY, &normZ);
/* ProtoNN class constructor. 
 * ProtoNN is a Multi-class classification algorithm - EdgeML
 */
ProtoNNF predictor1;
// Voting class constructor takes as input the (index of max no of labels + 1)
Vote Vote1(5);

int VOTE_RESULT;
int COUNT_AFTER_RESET;
bool FLAG_FIRST_WINDOWLENGTH = false; 

time_t CURRENT_TIME, LAST_SENT_TIME;
 
/* Used for min-max normalization.
 * These values may have to be changed depending on MPU
 * Values defined in config.h
 */
Vector3D<float> normAcc;
Vector5D<float> normNgon;
Vector5D<float> minNgon(MIN_NGON, MIN_NGON, MIN_NGON, MIN_NGON, MIN_NGON);
Vector5D<float> maxNgon(MAX_NGON, MAX_NGON, MAX_NGON, MAX_NGON, MAX_NGON);
Vector3D<float> minAcc(MIN_X, MIN_Y, MIN_Z);
Vector3D<float> maxAcc(MAX_X, MAX_Y, MAX_Z);

const int L = 6;
int scores[L];
// Gestures are mapped to classes - Do not change ordering!
const char *GESTURE_TO_COMMUNICATE[5] = {"", "A", "B", "C", "D"};
// Function Signature
int featurize_and_predict(float ngon_1, float ngon_2, float ngon_3, float ngon_4, float ngon_5, float acc_x, float acc_y, float acc_z);
std::ifstream infile(DATA_FILE);

int main() {
    float ngon_1, ngon_2, ngon_3, ngon_4, ngon_5;
    float acc_x, acc_y, acc_z;
    bool initSuccess = true;
        if (predictor1.getErrorCode()){
        std::cout<<"ProtoNNF initialization failed with code ";
        std::cout<<predictor1.getErrorCode()<<std::endl;
        initSuccess = false;
    }
    COUNT_AFTER_RESET = 0;
    VOTE_RESULT = 1;
    LAST_SENT_TIME = time(NULL);
    while(infile >> ngon_1 >> ngon_2 >> ngon_3 >> ngon_4 >> ngon_5 >> acc_x >> acc_y >> acc_z){
    // IF there is data to be read
        if(featurize_and_predict(ngon_1, ngon_2, ngon_3, ngon_4, ngon_5, acc_x, acc_y, acc_z)){
            printf("Error in featuring and predicting\n");
            break;
        }
    }
    return 0;
}

int featurize_and_predict(float ngon_1, float ngon_2, float ngon_3, float ngon_4, float ngon_5, float acc_x, float acc_y, float acc_z){
    COUNT_AFTER_RESET++;
    // Converting values to vectors for consistency
    Vector3D<float> acc(acc_x, acc_y, acc_z);
    Vector5D<float> ngon(ngon_1, ngon_2, ngon_3, ngon_4, ngon_5);
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
    std::cout<<std::left<<std::setw(8)<<"Result: "<<std::right<<std::setw(2)<<result;
    std::cout<<std::left<<std::setw(8)<<"   Score:"<<std::right<<std::setw(8)<<scores[result];
    // Voting to get rid of stray gestures
    Vote1.forcePush(result);
    VOTE_RESULT = Vote1.result();
    std::cout<<std::left<<std::setw(15)<<"   Vote Result: ";
    std::cout<<std::left<<std::setw(3)<<VOTE_RESULT;
    if((VOTE_RESULT == 1)||(VOTE_RESULT == 2)||(VOTE_RESULT == 3)||
        (VOTE_RESULT == 4)||(VOTE_RESULT == 5)){
        std::cout<<"Gesture Detected: "<<GESTURE_TO_COMMUNICATE[VOTE_RESULT]<<std::endl;        
    }
    else
        std::cout<<std::endl;
    return 0;
}


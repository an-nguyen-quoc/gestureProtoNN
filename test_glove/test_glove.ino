#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>
#include <time.h>

Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);

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
time_t start;
void setup(){
  Serial.begin(9600);       //Begin serial communication

  if(!accel.begin())
  {
    /* There was a problem detecting the ADXL345 ... check your connections */
    Serial.println("Ooops, no ADXL345 detected ... Check your wiring!");
    while(1);
  }

  accel.setRange(ADXL345_RANGE_16_G);
  start = millis();
}

void loop(){
  
  if ((millis() - start) % 100 == 0)
  {
    sensors_event_t event; 
  accel.getEvent(&event);
  
  thumb_value = analogRead(THUMB);         //Read and save analog value from potentiometer
  ind_finger_value = analogRead(INDEX_FINGER);
  mid_finger_value = analogRead(MIDDLE_FINGER);
  ring_finger_value = analogRead(RING_FINGER);
  pinkie_value = analogRead(PINKIE);
  Serial.print(millis()); Serial.print(",");
  Serial.print(thumb_value); Serial.print(",");
  Serial.print(ind_finger_value); Serial.print(",");
  Serial.print(mid_finger_value); Serial.print(",");
  Serial.print(ring_finger_value); Serial.print(",");
  Serial.print(pinkie_value); Serial.print(",");

  Serial.print(event.acceleration.x); Serial.print(",");
  Serial.print(event.acceleration.y); Serial.print(",");
  Serial.print(event.acceleration.z); Serial.println();
  }
                         //Small delay
}

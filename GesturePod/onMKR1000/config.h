/*
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT license.
 *
 * Configuration parameters
 */
#ifndef __CONFIG__
#define __CONFIG__

/*
 * Baud rate for serial communication.
 */
#define BAUD_RATE 				9600
/*
 * Baud rate for HM-10 BLE - Serial communication.
 */
// #define HM_10_BAUD_RATE			9600
// /*
//  * Baud rate for HC-05 Bluetooth - Serial communication.
//  */
// #define HC_05_BAUD_RATE			38000	
/*
 * The LED Pin.
 */
// #define LED_PIN 				LED_BUILTIN
/*
 * The number of buckets that are in one feature
 * vector
 */
#define NUM_BUCKETS 			20 // số lượng feature.
/*
 * The stride in terms of number of
 * measurements (instances) that is used for featurization.
 */
#define STRIDE					1
/*
 * The width of the internal buffer that retains
 * a subwindow worth of measurements. 2 x because
 * we have to keep track of acceleration and gyro
 * values. (Accel and Gyro values are of type Vector16).
 */
#define BUCKET_BUFF_WIDTH 		(2 * BUCKET_WIDTH)
#define BUCKET_WIDTH 			20 // độ dài một mẫu dữ liệu
#define FEATURE_LENGTH			(8 * BUCKET_WIDTH + 4)  // bằng 8 nhân số histogram , + 4
/*
 * For the current set of features, we have 6 features
 * per bucket - the standard deviations for the 6 raw
 * values. Hence the feature vector dimension is 
 * `6 x NUM_BUCKETS`+ Indices and length of max and min values of gy.
 */
#define FEAT_VEC_DIM 			((8 * NUM_BUCKETS) + 4) // 8 nhân số histogram + 4

/* Minimum and Maximum Acceleration and Gyro
 * Values for Min-Max normalisation.
 * Refer ./src/minmaxnormalize.h
 */
#define MIN_NGON_1 				100
#define MAX_NGON_1 				400
#define MIN_NGON_2 				100
#define MAX_NGON_2 				600
#define MIN_NGON_3 				100
#define MAX_NGON_3 				400
#define MIN_NGON_4 				100
#define MAX_NGON_4 				600
#define MIN_NGON_5 				100
#define MAX_NGON_5 				500
#define MIN_X 				-20
#define MIN_Y 				-20
#define MIN_Z				-20
#define MAX_X 				20
#define MAX_Y 				20
#define MAX_Z 				20


#endif // __CONFIG__

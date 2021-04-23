/*
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT license.
 *
 * Configuration parameters
 */
#ifndef __CONFIG__
#define __CONFIG__

/*
 * The number of buckets that are in one feature
 * vector
 */
#define NUM_BUCKETS 			10
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
#define BUCKET_WIDTH 			10
#define FEATURE_LENGTH			(8 * BUCKET_WIDTH + 4) 
/*
 * For the current set of features, we have 6 features
 * per bucket - the standard deviations for the 6 raw
 * values. Hence the feature vector dimension is 
 * `6 x NUM_BUCKETS`+ Indices and length of max and min values of gy.
 */
#define FEAT_VEC_DIM 			((8 * NUM_BUCKETS) + 4)

/* Minimum and Maximum Acceleration and Gyro
 * Values for Min-Max normalisation.
 * Refer ./src/minmaxnormalize.h
 */
#define MIN_NGON 				-1024
#define MAX_NGON 				1024
#define MIN_X 				-5
#define MIN_Y 				-15
#define MIN_Z				-5
#define MAX_X 				5
#define MAX_Y 				15
#define MAX_Z 				5

#endif // __CONFIG__
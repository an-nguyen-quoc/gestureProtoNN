/*
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT license.
 * 
 * Declaration of Featurizer class for ML predictions
 */

#ifndef __Featurizer__
#define __Featurizer__

#include "../config.h"
#include "utils.h"

class Featurizer {
    FIFOCircularQ<float, 10> *ngon_1, *ngon_2, *ngon_3, *ngon_4, *ngon_5, *X, *Y, *Z;
    float sensorValue1Dflat[10];
    int bucketIndex;
    int bucketWidth=10; // Default value of number of buckets 
    int getBucket(
        FIFOCircularQ<float, 10>*, 
        int bucketDistribution[]);
    /*
     * Format of feature vector:[longestPosIndex,longestPosCount,
     * longestNegCount,longestNegIndex,ax[10buckets],
     * ay[10buckets],az[10buckets],
     * gx[10buckets],gy[10buckets],gz[10buckets]]
     */
public:
    Featurizer(
        int bucketWidth, 
        FIFOCircularQ<float, 10>*, 
        FIFOCircularQ<float, 10>*, 
        FIFOCircularQ<float, 10>*, 
        FIFOCircularQ<float, 10>*, 
        FIFOCircularQ<float, 10>*, 
        FIFOCircularQ<float, 10>*, 
        FIFOCircularQ<float, 10>*, 
        FIFOCircularQ<float, 10>* 
        );
    int featurize(int bucketDistribution[]);
};

#endif //__Featurizer__
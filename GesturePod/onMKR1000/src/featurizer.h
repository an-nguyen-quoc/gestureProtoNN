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
    FIFOCircularQ<float, 20> *ngon_1, *ngon_2, *ngon_3, *ngon_4, *ngon_5, *X, *Y, *Z;
    float sensorValue1Dflat[20];
    int bucketIndex;
    int bucketWidth=20; // Default value of number of buckets 
    int getBucket(
        FIFOCircularQ<float, 20>*, 
        int bucketDistribution[]);
    /*
     * Format of feature vector:[longestPosIndex,longestPosCount,
     * longestNegCount,longestNegIndex,ax[20buckets],
     * ay[20buckets],az[20buckets],
     * gx[20buckets],gy[20buckets],gz[20buckets]]
     */
public:
    Featurizer(
        int bucketWidth, 
        FIFOCircularQ<float, 20>*, 
        FIFOCircularQ<float, 20>*, 
        FIFOCircularQ<float, 20>*, 
        FIFOCircularQ<float, 20>*, 
        FIFOCircularQ<float, 20>*, 
        FIFOCircularQ<float, 20>*, 
        FIFOCircularQ<float, 20>*, 
        FIFOCircularQ<float, 20>* 
        );
    int featurize(int bucketDistribution[]);
};

#endif //__Featurizer__
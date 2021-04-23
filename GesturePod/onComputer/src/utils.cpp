/*
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT license.
 * Featurizer for ML predictions
 */

#include "utils.h"

/**
 * Min-max normalization of a measurement. The min and max
 * values have to be provided.
 *
 * @param v The values to normalize. Expected 16bit ints.
 * @param vmax A float vector containing the maximum values of 
 * vector.
 * @param vmin The minimum values for vector 1.
 * @param dst The float destination where the values will be
 * stored.
 * @returns void
 */
void minMaxNormalize(
    const Vector3D<float> *v,
    const Vector3D<float> *vmin, 
    const Vector3D<float> *vmax,
    Vector3D<float>   *dst
    ){
    
    dst->x = ((float)(v->x) - (float)(vmin->x));
    dst->x /= ((float)vmax->x - (float)vmin->x);

    dst->y = ((float)(v->y) - (float)(vmin->y));
    dst->y /= ((float)vmax->y - (float)vmin->y);

    dst->z = ((float)(v->z) - (float)(vmin->z));
    dst->z /= ((float)vmax->z - (float)vmin->z);
}
void minMaxNormalize(
    const Vector5D<float> *v,
    const Vector5D<float> *vmin, 
    const Vector5D<float> *vmax,
    Vector5D<float>   *dst
    ){
    
    dst->data_1 = ((float)(v->data_1) - (float)(vmin->data_1));
    dst->data_1 /= ((float)vmax->data_1 - (float)vmin->data_1);

    dst->data_2 = ((float)(v->data_2) - (float)(vmin->data_2));
    dst->data_2 /= ((float)vmax->data_2 - (float)vmin->data_2);

    dst->data_3 = ((float)(v->data_3) - (float)(vmin->data_3));
    dst->data_3 /= ((float)vmax->data_3 - (float)vmin->data_3);

    dst->data_4 = ((float)(v->data_4) - (float)(vmin->data_4));
    dst->data_4 /= ((float)vmax->data_4 - (float)vmin->data_4);

    dst->data_5 = ((float)(v->data_5) - (float)(vmin->data_5));
    dst->data_5 /= ((float)vmax->data_5 - (float)vmin->data_5);
}

/* Definition of Vote class members
 */
Vote::Vote(int maxLabelIndexIP) {
    initStatus = 0;
    if(maxLabelIndex > MAX_LABEL_INDEX) {
        initStatus = -1;
    }
    maxLabelIndex = maxLabelIndexIP;
    front = -1;
    back = -1;
    for(int i =0; i< maxLabelIndex; i++)
        resultScores[i] = 0;
}

void Vote::forcePush(int x) {   
    int out = 0;
    if (front == -1) {
        // Empty
        back = 0;
        front = 0;
    } else if(back == front) {
        // Full
        out = queue[back];
        back += 1;
    }
    queue[front++] = x;
    front %= this->queueLength; 
    back %= this->queueLength;
    updateVote(x , out);
}

void Vote::updateVote(int in, int out) {
    resultScores[in] = resultScores[in] + 1;
    if(out!=0){
        resultScores[out] = resultScores[out] - 1;  
    }
}

int Vote::result() {
    int maxCount = -1, maxIndex = 1;
    for(int i=0; i<maxLabelIndex; i ++) {
        if(resultScores[i]>maxCount) {
            maxCount = resultScores[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}
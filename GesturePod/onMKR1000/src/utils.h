/*
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT license.
 *
 * Helper methods.
 */

#ifndef __UTILS__
#define __UTILS__

#include "../config.h"
#include "Arduino.h"



// Max label index used for Vote Class
#define MAX_LABEL_INDEX 40

/*
 ********************************
 *  Template Class declarations.
 ********************************
 */

template<class Typ, int16_t START_SIZE>
class FIFOCircularQ {
private:
    Typ queue[START_SIZE];
    int16_t front;
    int16_t back;
public:
    FIFOCircularQ();
    void forceAdd(Typ obj);
    Typ getNthEarliest(int i);
    void flatten(Typ* dst);
    int16_t getSize();
};

/*
 * A container for the accelerometer or
 * gyro values.
 */
template<typename Typ>
class Vector3D {
public:
    Typ x;
    Typ y;
    Typ z;
    Vector3D<Typ>();
    Vector3D<Typ>(Typ _x, Typ _y, Typ _z);
    Vector3D<Typ>& operator+(const Vector3D<Typ>& b);
    Vector3D<Typ>& operator-(const Vector3D<Typ>& b);
    Vector3D<Typ>& scale(Typ k);
    Vector3D<Typ>& invscale(Typ k);
    Typ& operator[] (int i);
};


template<typename Typ>
class Vector5D {
public:
    Typ data_1;
    Typ data_2;
    Typ data_3;
    Typ data_4;
    Typ data_5;
    Vector5D<Typ>();
    Vector5D<Typ>(Typ _data_1, Typ _data_2, Typ _data_3, Typ _data_4, Typ _data_5);
    Vector5D<Typ>& operator+(const Vector5D<Typ>& b);
    Vector5D<Typ>& operator-(const Vector5D<Typ>& b);
    Vector5D<Typ>& scale(Typ k);
    Vector5D<Typ>& invscale(Typ k);
    Typ& operator[] (int i);
};

/*
 ***********************************
 * Template class definitions.
 ***********************************
 */
/*
 * A FIFO circular array. New elements are pushed
 * to the front of the queue. The oldest element is
 * stored in the back of the queue. (There is some
 * misuse of terminology here.)
 *
 */
template<class Typ, int16_t START_SIZE>
FIFOCircularQ<Typ, START_SIZE>::FIFOCircularQ(){
    front = -1;
    back = -1;
}

/*
 * Adds an element to the circular queue. 
 * If the queue is full, the oldest element is removed
 * New element is added to the front of the queue.
 */
template<class Typ, int16_t START_SIZE>
void FIFOCircularQ<Typ, START_SIZE>::forceAdd(Typ obj){
    if (front == -1) {
        // Empty
        back = 0;
        front = 0;
    } else if(back == front) {
        // Full
        back += 1;
    }
    // Invariant: at this point, front points to the
    // empty cell.
    queue[front++] = obj;
    front %= START_SIZE;
    back %= START_SIZE;
}

/*
 * Returns the correct temporally ordered measurement.
 * getNthEarliest(0) Returns the 'first in' element.
 * getNthEarliest(1) Returns the 'second in' element.
 * getNthEarliest(size - 1) Returns the 'last in' element.
 * Undefined behaviour when queue is empty or when an
 * element that does not exist is requested.
 *
 * @param i As stated above
 * @returns ith element as stated above.
 */
template<class Typ, int16_t START_SIZE>
Typ FIFOCircularQ<Typ, START_SIZE>::getNthEarliest(int i) {
    return queue[(back + i) % START_SIZE];
}

/*
 * Flattens the circular queue into an array such that
 * array[0] holds the earliest element (first in) 
 * and array[size - 1] holds the latest element (last in).
 * @param dst The destination pointer to an array.
 * @returns void
 */
template<class Typ, int16_t START_SIZE>
void FIFOCircularQ<Typ, START_SIZE>::flatten(Typ * dst){
    int16_t s = this->getSize();
    for(int i = 0; i < s; i++){
        dst[i] = getNthEarliest(i);
    }
}

/*
 * Returns the current number of elements in the
 * queue.
 */
template<class Typ, int16_t START_SIZE>
int16_t FIFOCircularQ<Typ, START_SIZE>::getSize(){
    if(front == -1)
        return 0;
    else if (front == back)
        return START_SIZE;
    else if (front > back)
        return front - back;
    else
        return front + (START_SIZE - back);
}

/*
 ****************************
 * Vector3D
 ****************************
 */
template<class Typ>
Vector3D<Typ>::Vector3D(){
    this->x = (Typ)0;
    this->y = (Typ)0;
    this->z = (Typ)0;
}

template<class Typ>
Vector3D<Typ>::Vector3D(Typ _x, Typ _y, Typ _z){
    this->x = _x;
    this->y = _y;
    this->z = _z;
}


template<class Typ>
Vector5D<Typ>::Vector5D(){
    this->data_1 = (Typ)0;
    this->data_2 = (Typ)0;
    this->data_3 = (Typ)0;
    this->data_4 = (Typ)0;
    this->data_5 = (Typ)0;
}

template<class Typ>
Vector5D<Typ>::Vector5D(Typ _data_1, Typ _data_2, Typ _data_3, Typ _data_4, Typ _data_5){
   this->data_1 = _data_1;
    this->data_2 = _data_2;
    this->data_3 = _data_3;
    this->data_4 = _data_4;
    this->data_5 = _data_5;
}

/*
 * Vector sum of two vectors.
 */
template<class Typ>
Vector3D<Typ>& Vector3D<Typ>::operator+(const Vector3D<Typ>& b){
    this->x += b.x;
    this->y += b.y;
    this->z += b.z;
    return *(this);
}

template<class Typ>
Vector5D<Typ>& Vector5D<Typ>::operator+(const Vector5D<Typ>& b){
    this->data_1 += b.data_1;
    this->data_2 += b.data_2;
    this->data_3 += b.data_3;
    this->data_4 += b.data_4;
    this->data_5 += b.data_5;
    return *(this);
}

/*
 * Vector difference of two vectors.
 */
template<class Typ>
Vector3D<Typ>& Vector3D<Typ>::operator-(const Vector3D<Typ>& b){
    this->x -= b.x;
    this->y -= b.y;
    this->z -= b.z;
    return *(this);
}


template<class Typ>
Vector5D<Typ>& Vector5D<Typ>::operator-(const Vector5D<Typ>& b){
    this->data_1 -= b.data_1;
    this->data_2 -= b.data_2;
    this->data_3 -= b.data_3;
    this->data_4 -= b.data_4;
    this->data_5 -= b.data_5;
    return *(this);
}

/*
 * vector scaled by k.
 */
template<class Typ>
Vector3D<Typ>& Vector3D<Typ>::scale(Typ k){
    this->x *= k;
    this->y *= k;
    this->z *= k;
    return *(this);
}


template<class Typ>
Vector5D<Typ>& Vector5D<Typ>::scale(Typ k){
    this->data_1 *= k;
    this->data_2 *= k;
    this->data_3 *= k;
    this->data_4 *= k;
    this->data_5 *= k;
    return *(this);
}
/* 
 * Scaling by 1/k where k is the argument. (This method
 * is required for integer vectors where 1/k might be
 * typecasted.)
 */
template<class Typ>
Vector3D<Typ>& Vector3D<Typ>::invscale(Typ k){
    this->x /= k;
    this->y /= k;
    this->z /= k;
    return *(this);
}


template<class Typ>
Vector5D<Typ>& Vector5D<Typ>::invscale(Typ k){
    this->data_1 /= k;
    this->data_2 /= k;
    this->data_3 /= k;
    this->data_4 /= k;
    this->data_5 /= k;
    return *(this);
}
/*
 * Access the vector elements as if they are an array.
 * Helps when looping.
 */
template<class Typ>
Typ& Vector3D<Typ>::operator[] (int i) {
    if (i == 1)
        return this->y;
    else if (i == 2)
        return this->z;
    else return this->x;
}


template<class Typ>
Typ& Vector5D<Typ>::operator[] (int i) {
    if (i == 1)
        return this->data_2;
    else if (i == 2)
        return this->data_3;
        else if (i == 3)
        return this->data_4;
        else if (i == 4)
        return this->data_5;
    else return this->data_1;
}

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
    );

void minMaxNormalize(
    const Vector5D<int> *v,
    const Vector5D<int> *vmin, 
    const Vector5D<int> *vmax,
    Vector5D<float>   *dst
    );
/* Voting mechanism to prevent stray gestures.
 *  
 * A constant poll of the previous 6 predictions is maintained.
 * The candidate with the highest poll is returned
 */
class Vote{
public:
    void forcePush(int x);
    int result();
    Vote(int maxLabelIndexIP);
    int getInitStatus();
private:
    static const int queueLength=6;
    int initStatus;
    int maxLabelIndex;
    int queue[queueLength]; 
    int front, back; 
    int resultScores[MAX_LABEL_INDEX + 1];
    void updateVote(int in, int out);
};

#endif // __UTILS__

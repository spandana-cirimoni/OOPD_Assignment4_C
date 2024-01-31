// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array_Base.h"
#include <iostream>
using namespace std;
#include <stdexcept>         // for std::out_of_bounds exception

//
// Array_Base
//
template <typename T>
Array_Base <T>::Array_Base (void):
data_(nullptr),
cur_size_(10),
max_size_(10)
{
}

//
// Array_Base (size_t)
//
template <typename T>
Array_Base <T>::Array_Base (size_t length):
data_(new T[length]),
cur_size_(length),
max_size_(length)
{
}

//
// Array_Base (size_t, char)
//
template <typename T>
Array_Base <T>::Array_Base (size_t length, T fill):
data_(new T[length]),
cur_size_(length),
max_size_(length)
{
    for(int i=0;i<this->cur_size_;i++){
        this->data_[i]=fill;
    }
}

//
// ~Array
//
template <typename T>
Array_Base <T>::~Array_Base (void)
{
    if(data_!=nullptr)
    {
        delete [] data_;
    }
}

//
// operator []
//
template <typename T>
T & Array_Base <T>::operator [] (size_t index)
{
    if (index < this->max_size_) {
        this->cur_size_=index;
        return data_[index];
    }
    throw std::out_of_range ("Array Out of Bound Exception");
}

//
// operator [] 
//
template <typename T>
const T & Array_Base <T>::operator [] (size_t index) const
{
    if (index < this->max_size_) {
        return data_[index];
    }
    throw std::out_of_range ("Array Out of Bound Exception");
}

//
// get
//
template <typename T>
T Array_Base <T>::get (size_t index) const
{
    if (index < this->max_size_) {
        return this->data_[index];
    }
    throw std::out_of_range ("Array Out of Bound Exception");
}

//
// set
//
template <typename T>
void Array_Base <T>::set (size_t index, T value)
{
    if (index < this->max_size_) {
        this->cur_size_=index;
        this->data_[index]=value;
    }
    else{
    throw std::out_of_range ("Array Out of Bound Exception");
    }
}

//
// find (char)
//
template  <typename T>
int Array_Base <T>::find (T value) const
{
    int flag=-1;
    for(int i=0;i<this->cur_size_;i++){
        if(this->data_[i]==value){
            flag=i;
            break;
        }
    }
    return (flag==-1)? -1 : flag;
}

//
// find (char, size_t) 
//
template <typename T>
int Array_Base <T>::find (T val, size_t start) const
{
    if (start < this->max_size_) {
        int flag=-1;
        for(int i=start;i<this->cur_size_;i++){
        if(this->data_[i]==val){
            flag=i;
            break;
        }
    }
    return (flag==-1)? -1 : flag;
    }
    throw std::out_of_range ("Array Out of Bound Exception");
}

//
// operator ==
//
template <typename T>
bool Array_Base <T>::operator == (const Array_Base & rhs) const
{
    for(int i=0;i<this->cur_size_;i++){
        if(this->data_[i]==rhs.data_[i]){
            return true;
        }
    }
    return false;
}

//
// operator !=
//
template <typename T>
bool Array_Base <T>::operator != (const Array_Base & rhs) const
{
    for(int i=0;i<this->cur_size_;i++){
        if(this->data_[i]!=rhs.data_[i]){
            return true;
        }
    }
    return false;
}

//
// fill
//
template <typename T>
void Array_Base <T>::fill (T value)
{
    for(int i=0;i<max_size_;i++){
        this->data_[i]=value;
    }
    this->cur_size_=this->max_size_;
}

//
// getCurrentSize
template <typename T>
T Array_Base <T>::getCurrentSize()
{
    return this->cur_size_;
}

//
// getMaximumSize
template <typename T>
T Array_Base <T>::getMaximumSize()
{
    return this->max_size_;
}

//
// getData
template <typename T>
T* Array_Base <T>::getData()
{
    return this->data_;
}

//
// setCurrentSize
template <typename T>
void Array_Base <T>::setCurrentSize(size_t size)
{
    this->cur_size_=size;
}

//
// setMaximumSize
template <typename T>
void Array_Base <T>::setMaximumSize(size_t size)
{
    this->max_size_=size;
}

//
// setData
template <typename T>
void Array_Base <T>::setData(T * data)
{
    if(data!=nullptr)
    {
        for(int i=0;i<this->cur_size_;i++){
        this->data_[i]=data[i];
        }
    }
    else{
        this->data_=nullptr;
    }
}
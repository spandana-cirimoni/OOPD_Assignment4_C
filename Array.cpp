// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"
#include <iostream>
using namespace std;
#include <stdexcept>         // for std::out_of_bounds exception

//
// Array
//
template <typename T>
Array <T>::Array (void):
Array_Base <T> ()
{
}

//
// Array (size_t)
//
template <typename T>
Array <T>::Array (size_t length):
Array_Base <T> (length)
{
}

//
// Array (size_t, char)
//
template <typename T>
Array <T>::Array (size_t length, T fill):
Array_Base <T> (length,fill)
{
}

//
// Array (const Array &)
//
template <typename T>
Array <T>::Array (const Array & array)
{
}


//
// ~Array
//
template <typename T>
Array <T>::~Array (void)
{
}

//
// operator =
//
template <typename T>
const Array <T> & Array <T>::operator = (const Array & rhs)
{
    if(rhs.data_!=this->getData()){
        T *temp=new T[rhs.max_size_];
        this->setMaximumSize(rhs.max_size_);
        this->setCurrentSize(rhs.cur_size_);
        for(int i=0;i<this->getCurrentSize();i++){
            temp[i]=rhs.data_[i];
        }
        this->SetData(temp);
    }
    return this;
}

//
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size)
{
    if(new_size!=this->getCurrentSize())
    {
        if(new_size>this->getMaximumSize()){
            T * resize_data_=new T[new_size];
			for (size_t i = 0; i < cur_size_; i++)
			{
				resize_data_[i]=data_[i];
			}
			cur_size_=new_size;
			max_size_=new_size;
            std::swap(resize_data_,data_);
			delete [] resize_data_;
        }
        else
		{
			cur_size_=new_size;
		}
    }
}
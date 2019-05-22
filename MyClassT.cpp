/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyClassT.cpp
 * Author: pzelewski
 * 
 * Created on May 3, 2019, 3:44 PM
 */

#include "MyClassT.h"

template <class T> MyClassT<T>::MyClassT() {
}

template <class T> MyClassT<T>::MyClassT(const MyClassT& orig) {
}

template <class T> MyClassT<T>::~MyClassT() {
}

template <class T> T MyClassT<T>::print() {
}

template class  MyClassT<char*>; 
template class  MyClassT<int>;

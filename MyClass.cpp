/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyClass.cpp
 * Author: pzelewski
 * 
 * Created on May 1, 2019, 11:20 AM
 */

#include "MyClass.h"

MyClass::MyClass() {
}

MyClass::MyClass(const MyClass& orig) {
}

MyClass::~MyClass() {    
}

string MyClass::foo()
{
    return "foo" ;
}

template <class T> T MyClass::minimum( T a,T b )
{
    return a;
}

template int MyClass::minimum( int,int );















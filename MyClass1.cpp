/* 
 * File:   MyClass1.cpp
 * Author: Piotr
 * 
 * Created on May 21, 2019, 3:59 PM
 */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myClass1.cpp
 * Author: pzelewski
 * 
 * Created on May 1, 2019, 3:33 PM
 */

#include "MyClass1.h"
#include "MyClass.h"

MyClass1::MyClass1() {
}

MyClass1::MyClass1(const MyClass1& orig) {
}

MyClass1::~MyClass1() {
}

string MyClass1::foo()
{
    return ("MyClass1" +  m->foo()) ;
}



/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myClass1.h
 * Author: pzelewski
 *
 * Created on May 1, 2019, 3:33 PM
 */

#ifndef MYCLASS1_H
#define MYCLASS1_H

#include <iostream>
class MyClass;
using namespace std;

class MyClass1 {
public:
    MyClass1();
    MyClass1(const MyClass1& orig);
    virtual ~MyClass1();
    string foo();
private:
    MyClass * m;

};

#endif /* MYCLASS1_H */



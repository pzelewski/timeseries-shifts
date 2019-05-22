/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyClass.h
 * Author: pzelewski
 *
 * Created on May 1, 2019, 11:20 AM
 */

#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass();
    MyClass(const MyClass& orig);
    virtual ~MyClass();
    string foo();
    template <class T> T minimum( T a,T b );
    template<typename Func> void findMatchingAddresses (Func&& func);
    //{ 
    //   func("Hello from findMatchingAddresses");
    //}
    int bar;
private:

};

//#include "MyClass.tpp"

  
template<typename Func> void MyClass::findMatchingAddresses (Func&& func)
{ 
    func("Hello from findMatchingAddresses");
}
 


#endif /* MYCLASS_H */





/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: pzelewski
 *
 * Created on April 30, 2019, 3:40 PM
 */


#include <iostream>
#include <typeinfo>
#include "MyClass1.h"
#include "MyClass.h"
#include "MyClassT.h"


using namespace std;

/*
 * 
class MyClass
{
public:
  string foo();
  int bar;
};

string MyClass::foo()
{
    return "foo";
}
 * 
*/

template <class T> 
T minimum( T a,T b )
{   
    T rval;
    (a<=b) ? rval = a : rval = b ;
    return rval;
}


int main(int argc, char** argv) {
    
    cout << "!!!Hello world!!!" << endl;
    for(int i=0;i<argc;i++)
    {
    cout << "arg " << i << " " <<  argv[i] << endl;
    }
    
    MyClass1 * a;
    
    cout << a->foo() << endl;
    
    cout << minimum<int>(5,4) << endl;
    
    MyClass * mc;
    
    cout << mc->minimum<int>(1,4) << endl;
    
    //auto func = [](){ cout << "Hello world"; };
    
    //func(); // now call the function

    auto func = [](const string str){
        cout << str << endl;
    };
    
    func("hi");
    
    mc->findMatchingAddresses([](const string str){
        cout << str << endl;
    });
    
    /*
    mc->findMatchingAddresses([](const string str){
        cout << str << endl;
    });
     */

    MyClassT<int> mti;
    
    cout << typeid(mti).name() << endl;
    
    MyClassT<char*> mtc;
    
    cout << typeid(mtc).name() << endl;
    
    
    cout << &mtc << endl;
    MyClassT<char*> * mtcp = &mtc;
    cout << &mtcp << endl;
    
    int i = 0;
    cout << sizeof(i) << endl;
    
    cout << sizeof(mtcp) << endl;
    
    cout << sizeof(* mtcp) << endl;
    
    cout << "Done " << endl;
    
    return 0;
}



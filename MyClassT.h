/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyClassT.h
 * Author: pzelewski
 *
 * Created on May 3, 2019, 3:44 PM
 */

#ifndef MYCLASST_H
#define MYCLASST_H

template <class T>
class MyClassT {
public:
    MyClassT();
    MyClassT(const MyClassT& orig);
    virtual ~MyClassT();
    T print();
private:

};

#endif /* MYCLASST_H */


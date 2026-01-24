/*
 *  B.h
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 * 
 *  Questions answered by Annie Boyd
 *  01/23/2026
 *
 */


#ifndef B_H
#define B_H
#include "A.h"

class B : public A
{
public:
    B();
    B(string name, int testDataB); //Q5: Added parameters to the constructor
	~B();
    
    
private:
    int testDataB;

};

#endif

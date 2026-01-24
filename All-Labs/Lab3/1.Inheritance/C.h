/*
 *  C.h
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 *
 * Questions answered by Annie Boyd
 * 01/23/2026
 */

#ifndef C_H
#define C_H
#include "B.h"

class C : public B
{
public:
    C();
    C(string name, int testDataB, double testDataC); //Q5: Added parameters to the constructor
	~C();
    
    
private:
    int testDataC;
};

#endif

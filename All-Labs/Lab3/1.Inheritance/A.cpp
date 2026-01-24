/*
 *  A.cpp
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 * 
 *  Questions answered by Annie Boyd 
 *  01/23/2026
 *
 */

#include "A.h"
#include <iostream>

using namespace std;

A::A() //Q1-4: Added parameters to the constructor
{
    n = "unnamed A";
    cout << "Inside A::A() for object " << n << endl;
    testData1 = 0;
    testData2 = 0;

}

A::A(string name, int testData1, int testData2) : n(name), testData1(testData1), testData2(testData2) //Q1-4: Added parameters to the constructor
{
    cout << "Inside A::A(string) for object " << n << endl;
}


A::~A()
{
    cout << "Inside A::~A() for object " << n << endl;
}


void A::setN(const char* s)
{
  n = s;
}

string A::getN(void) const
{
  return n;
}



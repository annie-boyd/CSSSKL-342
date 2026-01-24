/*
 *  C.cpp
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 * 
 *  Questions answered by Annie Boyd
 *  01/23/2026
 *
 */

#include "C.h"
#include <iostream>

using namespace std;

C::C()
{
  setN("unnamed C");
  testDataC = 0;
  cout << "Inside C::C() for object " << getN() << endl;
}

C::C(string name, int testDataB, double testDataC) : B(name, testDataB), testDataC(testDataC) //Q5: Added parameters to the constructor
{
  cout << "Inside C::C(string) for object " << getN() << endl;
}


C::~C()
{
  cout << "Inside C::~C() for object " << getN() << endl;
}



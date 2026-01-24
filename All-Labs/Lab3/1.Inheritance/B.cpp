/*
 *  B.cpp
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 *
 *  Questions answered by Annie Boyd
 *  01/23/2026
 */

#include "B.h"
#include <iostream>

using namespace std;

B::B()
{
  setN("unnamed B");
  testDataB = 0;
  cout << "Inside B::B() for object " << getN() << endl;
}

B::B(string name, int testDataB) : A(name, 0, 0), testDataB(testDataB) //Q5: Added parameters to the constructor
{
  cout << "Inside B::B(string) for object " << getN() << endl;
}


B::~B()
{
  cout << "Inside B::~B() for object " << getN() << endl;
}


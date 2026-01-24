/*
 *  A.h
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 *
 *  Questions answered by Annie Boyd
 *  01/23/2026
 */

#ifndef A_H
#define A_H

#include <string>
using namespace std;

class A
{
public:
    A();
    A(string name, int testData1, int testData2); //Q1-4: Added parameters to the constructor
	~A();
    
    void setN(const char* s);
    string getN() const;
    
private:
    string n;
    int testData1;
    int testData2;
};

#endif


/* Lab 3 - SuperSuperInt.h
    Interface for SuperSuperInt class, derived from SuperInt parent class
    contains a constructor and an overridden theValue() method
    Created by Annie Boyd
    01/23/2026
*/

#include <iostream>
#include "SuperSuperInt.h"


SuperSuperInt::SuperSuperInt(int init, const char* name)
    : SuperInt(init, name)
{
}

const int& SuperSuperInt::theValue()
{
    return SuperInt::theValue();
}
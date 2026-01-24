
/* Lab 3 - SuperSuperInt.cpp
    SuperSuperInt class, derived from SuperInt parent class
    contains a constructor and an overridden theValue() method
    Created by Annie Boyd
    01/23/2026
*/

#ifndef SuperSuperInt_H
#define SuperSuperInt_H
#include "SuperInt.h"

class SuperSuperInt : public SuperInt
{
public:
    SuperSuperInt(int init, const char *name); 
	const int& theValue();

private:

};

#endif

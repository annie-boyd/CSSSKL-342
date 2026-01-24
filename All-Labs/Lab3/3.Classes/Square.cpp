/*
 *  Square.cpp
 *  Class-example
 * 
 *  Questions answered by Annie Boyd
 *  01/24/2026
 *
 */

#include "Square.h"
#include <iostream>

void Square::setSize(int newSize)
{
   theSize = newSize;
}


int Square::getSize(void) const
{
   return theSize;
}

Square& Square::operator = (const Square& other)
{
	theSize = other.getSize();
	return *this;
}

bool Square::operator < (const Square& other)
{
   if (theSize < other.getSize()) {
      return true;
   } else {
      return false;
   }
}
//I don't think this class needs an assignment operator
// because it only has one member variable of type int
// which already has its own assignment operator defined.


std::ostream& operator<<(std::ostream& out, const Square& sq)
{
    out << sq.getSize();
    return out;
}


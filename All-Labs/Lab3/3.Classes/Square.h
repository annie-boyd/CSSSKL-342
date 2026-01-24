/*
 *  Square.h
 *  Class-example
 * 
 * Questions answered by Annie Boyd
 * 01/24/2026
 *
 */

#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>

class Square {
public:
   void setSize(int newSize);
   int getSize(void) const;
   Square& operator = (const Square&);
   bool operator < (const Square&);
   
private:
   int theSize;
   
};


std::ostream& operator<<(std::ostream& out, const Square& sq);

#endif

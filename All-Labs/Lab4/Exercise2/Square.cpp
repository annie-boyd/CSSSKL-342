/*
 *  Square.cpp
 *  Class-example
 * 
 *  Modified by Annie Boyd
 *
 */
#ifndef SQUARE_CPP
#define SQUARE_CPP
#include <iostream>
#include "Square.h"

using namespace std;

template <class T>
void Square<T>::setSize(T newSize)
{
	theSize = newSize;
}

template <class T>
T Square<T>::getSize(void) const
{
	return theSize;
}

template <class T>
Square<T> & Square<T>::operator=(const Square<T>& other)
{
	theSize = other.getSize();
	return *this;
}

template <class T>
ostream& operator<<(ostream &os, const Square<T> &c)
{
	os << c.getSize();
	return os;
}

template <class T>
bool Square<T>::operator<(const Square<T>& other) const
{
	return theSize < other.getSize();
}

#endif
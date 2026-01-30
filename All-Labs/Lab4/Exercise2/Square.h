/*
 *  Square.h
 *  Class-example
 *
 *  Modified by Annie Boyd
 *. 1/30/2026
 */


#ifndef SQUARE_H
#define SQUARE_H

template <class T>
class Square {
	friend std::ostream& operator<<(std::ostream&, const Square<T>&);
public:
	Square<T>& operator=(const Square<T>& other);
	bool operator<(const Square<T>&) const;
	void setSize(T newSize);
	T getSize(void) const;

private:
	T theSize;
};

#include "Square.cpp"
#endif


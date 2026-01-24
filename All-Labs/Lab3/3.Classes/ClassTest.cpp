/* Lab 3 - ClassTest.cpp
   Questions answered by Annie Boyd
   01/24/2026
*/
#include <iostream>
#include "Square.h"
#include "SquareContainer.h"

using namespace std;

int main (int argc, char * const argv[]) {
   SquareContainer c;
   
   for (int i = 0; i < 20; i++) {
      Square s;
      s.setSize(i);
      c.insertNext(s);
   }
   SquareContainer d(c); // copy
   SquareContainer e = d; // 

   Square a, b;
   a.setSize(5);
   b.setSize(10);

   a=b;
   if (a < b) {
      cout << "a is less than b" << endl;
   } else {
      cout << "a is not less than b" << endl;
   }
   cout << "Square a size: " << a << endl;

   try {
      for (int i = 0; i < 21; i++) {
         cout << "Square " << i << " size is " 
         << c.deleteLast().getSize() << endl;
      }
   }
   catch (SquareContainerException sqe) {
      cerr << sqe.what();
   }

   
   
    return 0;
}

/*
 * SuperInt.h
 *
 * This is a class that acts like an int, but outputs various useful
 * stuff. You can add to this to experiment!
 *
 * Created by Michael Stiber
 * Modified by Yang Peng on 01/12/18
 * 
 * Questions answered by Annie Boyd
 * 01/23/2026
 * 
 */
#include <string>

class SuperInt {
 public:
  // Name helps us see which variable
  SuperInt(int init, const char *name);

  ~SuperInt();

  // For demonstrating lvalues
  //int& theValue(void);
  int& theValue(void); //changed from const int& to int&

 private:
  int myValue; 
  std::string myName;

  // Neat trick: making this private prevents creating unitialized
  // objects
  SuperInt();

};




/* MySubClass.cpp
   Lab 4
   Implementation of MySubClass methods
   
   Annie Boyd
   1/30/2026
*/
#include "MySubClass.h"

MySubClass::MySubClass() : MyClass(), subClassData(0) {

}
MySubClass::MySubClass(int baseI, double baseD, int baseIp, int subData)
    : MyClass(), subClassData(subData) {
    setI(baseI);
    setD(baseD);
    setIp(baseIp);
}
MySubClass::MySubClass(const MySubClass& other)
    : MyClass(other), subClassData(other.subClassData) {
}
MySubClass& MySubClass::operator=(const MySubClass& other) {
    if (this != &other) {
        MyClass::operator=(other);
        subClassData = other.subClassData;
    }
    return *this;
}
int MySubClass::getSubClassData() const {
    return subClassData;
}
void MySubClass::setSubClassData(int subClass) {
    subClassData = subClass;
}

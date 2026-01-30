/* MySubClass.h
   Lab 4
   Declaration of MySubClass
   
   Annie Boyd
   1/30/2026
*/
#include "MyClass.h"

class MySubClass : public MyClass {
    public:
        MySubClass();
        MySubClass(int baseI, double baseD, int baseIp, int subData);
        MySubClass(const MySubClass& other);
        MySubClass& operator=(const MySubClass& other);

        int getSubClassData() const;
        void setSubClassData(int subClass);
        
    private:
    int subClassData;
};
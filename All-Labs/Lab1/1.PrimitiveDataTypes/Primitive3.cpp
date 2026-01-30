/* Primitive3 
    Lab 1
    This program takes a double as an input and returns the rounded integer.
    Created by Annie Boyd
    1/9/2026
*/
#include <iostream>
//#define DEBUG
using namespace std;

int myRoundingFunction(double num);

int main()
{
    int num = myRoundingFunction(1.2); // should return 1
    int num2 = myRoundingFunction(2.5); // should return 3
    int num3 = myRoundingFunction(-3.5); // should return -4
    int num4 = myRoundingFunction(-5.2); // should return -5

    cout << num << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;
}

int myRoundingFunction(double num)
{
    int roundedNum = (int)num;
    double fractionPart = num - roundedNum;

    #ifdef DEBUG
    cout << "fractionPart: " << fractionPart << endl;
    #endif

    if (fractionPart >= 0.5)
    {
        roundedNum += 1;
    }
    else if (fractionPart <= -0.5)
    {
        roundedNum -= 1;
    }
    return roundedNum;

}

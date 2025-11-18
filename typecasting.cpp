#include <iostream>
using namespace std;

int main()
{                // IMPLICIT/AUTOMATIC TYPE CASTING
    int num = 5; // Integer variable
    float num2;
    double num3;
    char myChar;

    bool var = true;
    bool var2 = false;

    num2 = num; // Implicitly converts int to float
    num3 = num;
    num3 = num2;  // Implicitly converts float to double
    myChar = num; // Implicitly converts int to char

    cout << num << " casted to float: " << num2 << endl;
    cout << num << " casted to double: " << num3 << endl;
    cout << num2 << " casted to double: " << num3 << endl;
    cout << " Boolean TRUE = " << var << endl;
    cout << " Boolean FALSE = " << var2 << endl;
    cout << num << " casted  int to char: " << myChar << endl;
}
#include <iostream>
using namespace std;

int main() {
    cout << "ADDITION:" << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    cout << "SUBTRACTION:" << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    cout << "MULTIPLICATION:" << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
    cout << "DIVISION:" << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
    cout << "MODULUS:" << num1 << " % " << num2 << " = " << (num1 % num2) << endl;  
    cout << "INCREMENT: ++" << num1 << " = " << (++num1) << endl;
    cout << "INCREMENT:" << "num1++ = " << (num1++) << endl;
    cout << "DECREMENT: --" << num2 << " = " << (--num2) << endl;
    cout << "DECREMENT:" << "num2-- = " << (num2--) << endl;  
    cout << "COMBINED INCREMENT AND ASSIGNMENT: num1 += num2; = " << (num1 += num2) << endl;
    cout << "COMBINED DECREMENT AND ASSIGNMENT: num1 -= num2; = " << (num1 -= num2) << endl;
    
}
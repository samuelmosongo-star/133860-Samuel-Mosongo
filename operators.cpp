#include <iostream>
using namespace std;

int main() {

    int num1 =16, num2 = 4;
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
    cout << "COMBINED MULTIPLICATION AND ASSIGNMENT: num1 *= num2; = " << (num1 *= num2) << endl;
    cout << "COMBINED DIVISION AND ASSIGNMENT: num1 /= num2; = " << (num1 /= num2) << endl;

    // COMPARISON/LOGICAL OPERATORS
    cout << " 3>2 = " << (3>2) << endl;
    cout << " 3<2 = " << (3<2) << endl; 
    cout << " 4>=3 = " << (4>=3) << endl;
    cout << " 4<=3 = " << (4<=3) << endl;
    cout << " 3==3 = " << (3==3) << endl;
    cout << " 3!=3 = " << (3!=3) << endl;  
    cout << " !(4>=3) = " << !(4>=3) << endl;

    // BOOLEAN OPERATORS
    cout << "  true && true = " << ((3>2) && (4 >= 2)) << endl;
    cout << " true && false = " << ((3>2) && (4 >= 2)) << endl;
    cout << " false && true = " << ((3<2) && (4 >= 2)) << endl;
    cout << " false && false = " << ((3<2) && (4 <= 2)) << endl;    
}
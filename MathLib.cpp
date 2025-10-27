#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = -10;
    int y = 16;
    double base = 2.0, exponent = 3.0;
    cout << "Absolutevalue of " << x << " is " << abs(x) << endl;
    cout << "Square root of " << y << " is " << sqrt(y) << endl;
    cout << "Logarithm of " << y << " is " << log(y) << endl;
    cout  << "Cosine of " << y << " is " << cos(y) << endl;
    cout << "2^3 = " << pow(base, exponent) << endl;
}
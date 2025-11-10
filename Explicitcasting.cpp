#include <iostream>
using namespace std;

int main()
{
    const int x = 42;

    // Attempting to modify a const variable directly would result in a compilation error.
    // We can use const_cast to create a non-const reference to the const variable.
    int &y = const_cast<int &>(x);

    y = 100; // Now we can modify y (which is the same as x)

    cout << "Modified x: " << x << endl; // x has been modified through y

    return 0;
}

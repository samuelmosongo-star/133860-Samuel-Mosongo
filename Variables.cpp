// Exploring different variable types in C++
#include <iostream>
using namespace std;

// Global Vriables
int globalVar = 100; /* Variable declared outside any function
 and accessible from any part of the source file */

 // Example function with parameter Variables
 void exampleFunction(int paramVar) /* Variable declared in the function brackets. Used to pass values to functions */
 {
     cout << "Parameter Variable: " << paramVar << endl;
 }

int main()
{
    int age;
    int year;
    int phone;

    // Local Variables
    int localVar = 50; /* Variable declared within a function
    and accessible only within that function */

    // Constant Variable
    const float PI = 3.14159; /* variable whose value cannot be changed
     after initialization */

    // Static Variable
    static int staticVar = 0; /* A variable that retains its value
    between function calls */

    // Calling the example function with a parameter variable
    exampleFunction(25);

    // Displaying the values of different variables
    cout << "Global Variable: " << globalVar << endl;
    cout << "Local Variable: " << localVar << endl;
    cout << "Constant Variable (PI): " << PI << endl;
    cout << "Static Variable: " << staticVar << endl;

    return 0;
}

// a simple program to demonstrate the use of the ternary operator
#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter the child's age: ";
    cin >> age;

    string message = (age >= 4) ? "Admitted to school." : "Declined : Not admitted to school.";
    cout << message << endl;
    return 0;
}
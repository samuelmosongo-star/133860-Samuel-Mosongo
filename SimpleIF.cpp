// Write a simple program that admits a child to school based on age
#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter the child's age: ";
    cin >> age;

    if (age >= 4) {
        cout << "Admitted to school." << endl;
    }
    else {
        cout << "Not admitted to school." << endl;
    }

    return 0;
}
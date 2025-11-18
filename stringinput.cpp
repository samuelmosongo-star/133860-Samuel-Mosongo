#include <iostream>
#include <string>
#include <limits>  // IMPORTANT: This is required!
using namespace std;

int main() {
    string fullName;
    
    cout << "Enter your full name\n";
    cin >> fullName;
    cout << "Hi " << fullName << " . Nice to meet you. " << endl;
    
    // Clear everything in the buffer up to and including the newline
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "Enter your full name \n";
    getline(cin, fullName);
    cout << "Hi again " << fullName << " . Nice to meet you. " << endl;
    
    return 0;
}
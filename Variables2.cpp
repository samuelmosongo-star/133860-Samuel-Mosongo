 // Exploring differen types in C++ i.e local, global, static, constant, sdatic and parameters
 #include <iostream>
 using namespace std;

 // Global variable
    int globalVar = 100;  /* Variable declared outside of any function. Has file scope*/

    const string weekDays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    void exampleFunction (string name)
    {
        cout << "Parameter Variable: " << name << endl;  

    }

    int main() 
    {
        // Local variable
        int localVar = 50;  /* Variable declared within a function. Has block scope*/

        // Static variable
        const float pi = 3.14159; /* Variable that retains its value between function calls. Has block scope but static storage duration*/

        static int staticVar = 0;  /* Variable that retains its value between function calls. Has block scope but static storage duration*/
        exampleFunction("Fredrick");

        staticVar++;
        cout << "Global Variable : " << globalVar << endl;
        cout << "Local Variable: " << localVar << endl;
        cout << "Constant Variable: " << pi << endl;

        staticVar++;
        cout << "Static Variable after increment: " << staticVar << endl;

        return 0;
    }
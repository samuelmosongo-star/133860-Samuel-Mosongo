#include <iostream>
#include <cmath>

int main()
{
    double num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Addition
    std::cout << "Addition: " << num1 + num2 << std::endl;

    // Subtraction
    std::cout << "Subtraction: " << num1 - num2 << std::endl;

    // Multiplication
    std::cout << "Multiplication: " << num1 * num2 << std::endl;

    // Division (with check for division by zero)
    if (num2 != 0)
    {
        std::cout << "Division: " << num1 / num2 << std::endl;
    }
    else
    {
        std::cout << "Division: Cannot divide by zero." << std::endl;
    }

    // Modulus (using fmod for floating-point numbers, with check for zero)
    if (num2 != 0)
    {
        std::cout << "Modulus: " << std::fmod(num1, num2) << std::endl;
    }
    else
    {
        std::cout << "Modulus: Cannot compute modulus by zero." << std::endl;
    }

    // Square root of first number (requires num1 > 0)
    if (num1 > 0)
    {
        std::cout << "Square root of first number: " << std::sqrt(num1) << std::endl;
    }
    else
    {
        std::cout << "Square root: First number must be positive." << std::endl;
    }

    // Square root of first number (requires num1 > 0)
    if (num2 > 0)
    {
        std::cout << "Square root of second number: " << std::sqrt(num2) << std::endl;
    }
    else
    {
        std::cout << "Square root: Second number must be positive." << std::endl;
    }

    // First number to the power of second number
    std::cout << "Power (first ^ second): " << std::pow(num1, num2) << std::endl;

    // Natural logarithm of first number (requires num1 > 0)
    if (num1 > 0)
    {
        std::cout << "Log of first number (natural log): " << std::log(num1) << std::endl;
    }
    else
    {
        std::cout << "Log: First number must be positive." << std::endl;
    }

    return 0;
}
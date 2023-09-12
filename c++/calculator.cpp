#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input two integers
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Addition
    int addition = num1 + num2;
    cout << "Addition: " << addition << endl;

    // Subtraction
    int subtraction = num1 - num2;
    cout << "Subtraction: " << subtraction << endl;

    // Multiplication
    int multiplication = num1 * num2;
    cout << "Multiplication: " << multiplication << endl;

    // Division with type casting
    double division = static_cast<double>(num1) / num2;
    cout << "Division: " << division << endl;

    return 0;
}

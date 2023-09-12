#include <iostream>
using namespace std;

// Function to swap two integers using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    // Input two integers
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Before swapping:" << endl;
    cout << "First integer: " << num1 << endl;
    cout << "Second integer: " << num2 << endl;

    // Call the swapByValue function
    swapByValue(num1, num2);

    cout << "After swapping:" << endl;
    cout << "First integer: " << num1 << endl;
    cout << "Second integer: " << num2 << endl;

    return 0;
}

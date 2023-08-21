#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input two variables
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    cout << "Before swapping: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    // Swapping using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    // Display swapped values
    cout << "After swapping: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}

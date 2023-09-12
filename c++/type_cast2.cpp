#include <iostream>
using namespace std;

int main() {
    int num;

    // Input an integer
    cout << "Enter an integer: ";
    cin >> num;

    // Convert integer to floating-point
    float floatNum = static_cast<float>(num);

    // Display the result
    cout << "Integer: " << num << endl;
    cout << "Floating-point: " << floatNum << endl;

    return 0;
}

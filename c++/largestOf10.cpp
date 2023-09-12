#include <iostream>
using namespace std;

int main() {
    const int numCount = 10;  // Number count
    double numbers[numCount]; // Array to store the numbers

    // Input 10 numbers
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < numCount; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Find the largest number using the ternary operator
    double largest = numbers[0];
    for (int i = 1; i < numCount; i++) {
        largest = (numbers[i] > largest) ? numbers[i] : largest;
    }

    // Display the largest number
    cout << "The largest number is: " << largest << endl;

    return 0;
}

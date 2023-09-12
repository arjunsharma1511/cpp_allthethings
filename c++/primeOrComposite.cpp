#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    // Input a number
    cout << "Enter a positive integer: ";
    cin >> num;

    // Check if the number is less than 2
    if (num <= 1) {
        isPrime = false;
    }
    else {
        // Check for factors from 2 to the square root of the number
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        cout << num << " is a prime number." << endl;
    }
    else {
        cout << num << " is a composite number." << endl;
    }

    return 0;
}

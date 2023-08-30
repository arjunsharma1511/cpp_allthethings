#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num, originalNum, remainder, n = 0, sum = 0;

    // Input a number
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate sum of nth powers of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if it's an Armstrong number
    if (sum == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}

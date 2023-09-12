#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0;

    // Input the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Check if n is a positive integer
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    // Calculate the sum of the first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Calculate the average
    double average = sum / n;

    // Output the result
    cout << "Average of the first " << n << " natural numbers: " << average << endl;

    return 0;
}

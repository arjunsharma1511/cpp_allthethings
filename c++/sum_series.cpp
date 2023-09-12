#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0;

    // Input the number of terms in the series
    cout << "Enter the number of terms in the series: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of terms must be a positive integer." << endl;
        return 1;
    }

    // Calculate and sum each term in the series
    for (int i = 1; i <= n; i++) {
        double term = 1.0;
        for (int j = 1; j <= i; j++) {
            term *= i;
        }
        sum += term / i;
    }

    // Output the result
    cout << "Sum of the series: " << sum << endl;

    return 0;
}

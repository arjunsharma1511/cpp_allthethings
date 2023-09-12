#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the number of rows for the pattern
    cout << "Enter the number of rows: ";
    cin >> n;

    // Check if the input is valid
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    // Loop to print the pattern
    for (int i = 1; i <= n; i++) {
        // Print the left part of the pattern
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print the right part of the pattern (in reverse order)
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}

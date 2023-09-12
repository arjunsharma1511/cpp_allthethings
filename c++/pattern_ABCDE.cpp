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
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}

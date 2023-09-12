#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input a character
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        // Convert lowercase to uppercase using ASCII
        char uppercaseCh = ch - 'a' + 'A';
        cout << "Uppercase: " << uppercaseCh << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        // Convert uppercase to lowercase using ASCII
        char lowercaseCh = ch - 'A' + 'a';
        cout << "Lowercase: " << lowercaseCh << endl;
    } else {
        cout << "Invalid input character." << endl;
    }

    return 0;
}

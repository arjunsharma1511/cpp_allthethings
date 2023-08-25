#include <iostream>
#include <string>
using namespace std;

string numberToWords(int num) {
    string words[] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    if (num < 0) {
        return "minus " + numberToWords(-num);
    } else if (num < 10) {
        return words[num];
    } else {
        return numberToWords(num / 10) + " " + words[num % 10];
    }
}

int main() {
    int num;

    // Input a number
    cout << "Enter a number: ";
    cin >> num;

    // Convert number to words
    string words = numberToWords(num);

    // Display the words
    cout << "Number in words: " << words << endl;

    return 0;
}

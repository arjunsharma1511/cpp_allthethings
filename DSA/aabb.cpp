#include <iostream>
using namespace std;

int main() {
    int num, a, b, temp, flag = 0;

    // Input a number
    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    while (temp != 0) {
        a = temp % 10;
        temp = temp / 10;
        b = temp % 10;
        temp = temp / 10;

        if (a != b) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        cout << "Number " << num << " is in the pattern of aabb" << endl;
    } else {
        cout << "Not in the pattern aabb" << endl;
    }

    return 0;
}

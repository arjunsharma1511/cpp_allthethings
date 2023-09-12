#include <iostream>
using namespace std;

int main() {
    int daysInMonth, startDay;

    // Input the number of days in the month and the start day
    cout << "Enter the number of days in the month: ";
    cin >> daysInMonth;
    cout << "Enter the start day (1=Sunday, 2=Monday, ..., 7=Saturday): ";
    cin >> startDay;

    if (daysInMonth < 28 || daysInMonth > 31 || startDay < 1 || startDay > 7) {
        cout << "Invalid input. Please enter valid values." << endl;
        return 1;
    }

    // Define an array to store the names of days
    string daysOfWeek[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    // Output the header with day names
    cout << "------------------------------------" << endl;
    for (int i = 0; i < 7; i++) {
        cout << daysOfWeek[i] << " ";
    }
    cout << endl << "------------------------------------" << endl;

    // Calculate and display the calendar
    int dayCounter = 1;
    for (int week = 0; week < 6; week++) {
        for (int day = 0; day < 7; day++) {
            if (dayCounter <= daysInMonth) {
                if (day >= startDay - 1 || week > 0) {
                    if (dayCounter < 10) {
                        cout << " " << dayCounter << "  ";
                    } else {
                        cout << dayCounter << "  ";
                    }
                    dayCounter++;
                } else {
                    cout << "    "; // Empty space for days before the start day
                }
            } else {
                break;
            }
        }
        cout << endl;
        if (dayCounter > daysInMonth) {
            break;
        }
    }

    cout << "------------------------------------" << endl;

    return 0;
}

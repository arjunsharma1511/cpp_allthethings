#include <iostream>
using namespace std;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    const double PI = 3.141;
    return PI * radius * radius;
}

int main() {
    double radius;

    // Input the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if (radius < 0) {
        cout << "Please enter a non-negative radius." << endl;
        return 1;
    }

    // Calculate the area using the function
    double area = calculateArea(radius);

    // Output the result
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}

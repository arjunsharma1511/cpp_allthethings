#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, y1, x2, y2;

    // Input the coordinates of the first point
    cout << "Enter coordinates of the first point (x1 y1): ";
    cin >> x1 >> y1;

    // Input the coordinates of the second point
    cout << "Enter coordinates of the second point (x2 y2): ";
    cin >> x2 >> y2;

    // Calculate the distance between the two points
    int deltaX = x2 - x1;
    int deltaY = y2 - y1;
    int distance = sqrt(deltaX * deltaX + deltaY * deltaY);

    // Display the distance
    cout << "The distance between the two points is: " << distance << endl;

    return 0;
}

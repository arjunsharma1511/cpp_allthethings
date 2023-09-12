#include <iostream>
using namespace std;

// Function to calculate the volume of a cuboid with default arguments
double calculateVolume(double length=1.0, double width = 1.0, double height = 1.0) {
    return length * width * height;
}

int main() {

    // Calculate the volume using the function with default arguments
    double volume = calculateVolume(); 

    // Output the result
    cout << "The volume of the cuboid is: " << volume << endl;

    return 0;
}

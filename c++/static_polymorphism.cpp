#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    double decimal1 = 3.5;
    double decimal2 = 2.5;

    // Add two integers
    int sum1 = add(num1, num2);
    cout << "Sum of integers: " << sum1 << endl;

    // Add two doubles
    double sum2 = add(decimal1, decimal2);
    cout << "Sum of doubles: " << sum2 << endl;

    return 0;
}

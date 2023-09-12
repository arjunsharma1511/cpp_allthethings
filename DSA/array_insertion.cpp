#include <iostream>
using namespace std;

void displayArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size = 0;

    // Input an array (e.g., 1, 2, 3, 4, 5)
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int choice, value, index;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Insert at the start" << endl;
        cout << "2. Insert at the end" << endl;
        cout << "3. Insert at a specific index" << endl;
        cout << "4. Display array" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value to insert at the start: ";
            cin >> value;
            for (int i = size; i > 0; --i) {
                arr[i] = arr[i - 1];
            }
            arr[0] = value;
            size++;
        } else if (choice == 2) {
            cout << "Enter value to insert at the end: ";
            cin >> value;
            arr[size] = value;
            size++;
        } else if (choice == 3) {
            cout << "Enter value to insert: ";
            cin >> value;
            cout << "Enter index to insert at: ";
            cin >> index;
            if (index >= 0 && index <= size) {
                for (int i = size; i > index; --i) {
                    arr[i] = arr[i - 1];
                }
                arr[index] = value;
                size++;
            } else {
                cout << "Invalid index." << endl;
            }
        } else if (choice == 4) {
            displayArray(arr, size);
        } else if (choice == 5) {
            cout << "Exiting program." << endl;
        } else {
            cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 5);

    return 0;
}

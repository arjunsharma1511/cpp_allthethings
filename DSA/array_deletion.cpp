#include <iostream>
using namespace std;

void displayArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
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
        cout << "1. Delete from the start" << endl;
        cout << "2. Delete from the end" << endl;
        cout << "3. Delete from a specific index" << endl;
        cout << "4. Display array" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (size > 0) {
                for (int i = 0; i < size - 1; ++i) {
                    arr[i] = arr[i + 1];
                }
                size--;
            } else {
                cout << "Array is empty. Cannot delete from the start." << endl;
            }
        } else if (choice == 2) {
            if (size > 0) {
                size--;
            } else {
                cout << "Array is empty. Cannot delete from the end." << endl;
            }
        } else if (choice == 3) {
            if (size > 0) {
                cout << "Enter index to delete: ";
                cin >> index;
                if (index >= 0 && index < size) {
                    for (int i = index; i < size - 1; ++i) {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                } else {
                    cout << "Invalid index." << endl;
                }
            } else {
                cout << "Array is empty. Cannot delete from a specific index." << endl;
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

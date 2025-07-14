#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice, value, position;

    do {
        cout << "Enter number of elements (1 to 100): ";
        cin >> n;
        if (n < 1 || n > 100) {
            cout << "Invalid size. Please enter between 1 and 100.\n";
        }
    } while (n < 1 || n > 100);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\nMENU:";
        cout << "\n1. Display";
        cout << "\n2. Insert at position";
        cout << "\n3. Update at position";
        cout << "\n4. Delete at position";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (n == 0) {
                    cout << "Array is empty.\n";
                } else {
                    cout << "Array: ";
                    for (int i = 0; i < n; i++)
                        cout << arr[i] << " ";
                    cout << endl;
                }
                break;

            case 2:
                if (n >= 100) {
                    cout << "Array is full. Cannot insert.\n";
                } else {
                    cout << "Enter position to insert (1 to " << n + 1 << "): ";
                    cin >> position;
                    if (position < 1 || position > n + 1) {
                        cout << "Invalid position.\n";
                    } else {
                        cout << "Enter value to insert: ";
                        cin >> value;
                        int index = position - 1;
                        for (int i = n; i > index; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[index] = value;
                        n++;
                        cout << "Inserted at position " << position << ".\n";
                    }
                }
                break;

            case 3:
                cout << "Enter position to update (1 to " << n << "): ";
                cin >> position;
                if (position < 1 || position > n) {
                    cout << "Invalid position.\n";
                } else {
                    cout << "Enter new value: ";
                    cin >> value;
                    arr[position - 1] = value;
                    cout << "Updated position " << position << ".\n";
                }
                break;

            case 4:
                if (n == 0) {
                    cout << "Array is already empty.\n";
                } else {
                    cout << "Enter position to delete (1 to " << n << "): ";
                    cin >> position;
                    if (position < 1 || position > n) {
                        cout << "Invalid position.\n";
                    } else {
                        int index = position - 1;
                        for (int i = index; i < n - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        n--;
                        cout << "Deleted element at position " << position << ".\n";
                    }
                }
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}





#include <iostream>
using namespace std;

int linearSearchRecursive(int arr[], int n, int target, int index = 0) {
    if (index >= n)
        return -1;
    if (arr[index] == target)
        return index;
    return linearSearchRecursive(arr, n, target, index + 1);
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> target;

    int result = linearSearchRecursive(arr, n, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}


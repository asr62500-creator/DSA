//4. Binary Search in a sorted array
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid;   // element found → return index
        }
        else if (arr[mid] < key) {
            low = mid + 1;   // search right side
        }
        else {
            high = mid - 1;  // search left side
        }
    }

    return -1;   // element not found
}

int main() {
    int arr[100], n, key;

    cout << "Enter size: ";
    cin >> n;

    // Size validation
    if (n < 0 || n > 100) {
        cout << "Invalid size";
        return 0;
    }

    cout << "Enter sorted elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << result;

    return 0;
}
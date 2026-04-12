//2. Delete an element at a given position in an array

#include <iostream>
using namespace std;

int deleteAtPos(int arr[], int n, int pos) {

    // Underflow check
    if (n == 0) {
        cout << "Underflow: Array is empty\n";
        return n;
    }

    // Position validation
    if (pos < 0 || pos >= n) {
        cout << "Invalid position\n";
        return n;
    }

    // Shift elements left
    for(int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    return n - 1;  // updated size
}

int main() {
    int arr[100], n, pos;

    cout << "Enter size: ";
    cin >> n;

    // Size validation
    if (n < 0 || n > 100) {
        cout << "Invalid size";
        return 0;
    }

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter position to delete (0-based): ";
    cin >> pos;

    // Call function
    n = deleteAtPos(arr, n, pos);

    cout << "Updated array:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
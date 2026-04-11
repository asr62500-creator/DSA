//1. Insert an element at an given position in an array.

#include <iostream>
using namespace std;

int insertAtPos(int arr[], int n, int pos, int item) {

    // Overflow check
    if (n == 100) {
        cout << "Overflow: Array is full\n";
        return n;
    }

    // Position validation
    if (pos < 0 || pos > n) {
        cout << "Invalid position\n";
        return n;
    }

    // Shift elements right
    for(int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    // Insert element
    arr[pos] = item;

    return n + 1;  // updated size
}

int main() {
    int arr[100], n, pos, item;

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

    cout << "Enter position (0-based): ";
    cin >> pos;

    cout << "Enter item: ";
    cin >> item;

    // Call function
    n = insertAtPos(arr, n, pos, item);

    cout << "Updated array:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
        
    return 0;
}
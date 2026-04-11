//3. Linear Search in an array
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {

    // Traverse array
    for(int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;   // element found → return index
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

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int result = linearSearch(arr, n, key);

    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << result;
    
    return 0;
}
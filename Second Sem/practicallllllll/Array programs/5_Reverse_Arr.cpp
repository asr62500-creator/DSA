// 5. Reverse an array (in-place)
#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {

    // Empty array check
    if (n == 0) {
        cout << "Array is empty, nothing to reverse\n";
        return;
    }

    // Reverse logic (swap from both ends)
    for(int i = 0; i < n / 2; i++) {

        // Swap arr[i] with arr[n-i-1]
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() {
    int arr[100], n;

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

    // Function call
    reverseArray(arr, n);

    cout << "Reversed array:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
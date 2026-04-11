#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            // If duplicate found
            if(arr[i] == arr[j]) {
                for(int i = j; i < n - 1; i++) {// Shift elements left
                    arr[i] = arr[i + 1];
                }

                n--;   // reduce size
                j--;   // check same index again
            }
        }
    }
    return n;   // new size
}

int main() {
    int arr[100], n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Call function
    n = removeDuplicates(arr, n);

    cout << "Array after removing duplicates:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
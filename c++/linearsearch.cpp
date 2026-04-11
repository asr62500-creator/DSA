#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element)
            return i;   // element found, return index
    }
    return -1;  // element not found
}

int main() {
    int key;

int arr[]={1,2,3,4,5,6,8,10,18};

    

    cout << "Enter element to search: ";
    cin >> key;

    int result = linearSearch(arr,9, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}


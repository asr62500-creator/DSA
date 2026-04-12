// 6. Merge two sorted arrays into a single sorted array
#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int arr3[]){

    // i → index for arr1, j → index for arr2, k → index for arr3 array
    int i = 0, j = 0, k = 0;

    // Compare elements of both arrays and copy smaller one to arr3
    while (i < n1 && j < n2) {

        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];  // copy from arr1
            i++;  // move in arr1
        } 
        else {
            arr3[k] = arr2[j];  // copy from arr2
            j++;  // move in arr2
        }
        k++;  // move in arr3 array
    }

    // If elements remain in arr1, copy them
    while (i < n1) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    // If elements remain in arr2, copy them
    while (j < n2) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    int n = n1 + n2;  // total size of merged array
     // Print merged array
    cout << "Merged array:\n";
    for(int i = 0; i < n; i++)
        cout << arr3[i] << " ";

}

int main() {
    int arr1[100], arr2[100], arr3[200];
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    // Input first sorted array
    cout << "Enter elements (sorted):\n";
    for(int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> n2;

    // Input second sorted array
    cout << "Enter elements (sorted):\n";
    for(int i = 0; i < n2; i++)
        cin >> arr2[i];

    // Call merge function
    mergeArrays(arr1, n1, arr2, n2, arr3);


     return 0;
}
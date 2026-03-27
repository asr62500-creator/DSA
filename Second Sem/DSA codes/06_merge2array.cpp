#include<iostream>
using namespace std;

int main()
{
    int arr1[50], arr2[50], arr3[100];
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    cout << "Enter elements of first array:\n";
    for(int i = 0; i < n; i++)
        cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> m;

    cout << "Enter elements of second array:\n";
    for(int i = 0; i < m; i++)
        cin >> arr2[i];

    // Merge arrays
    for(int i = 0; i < n; i++)
        arr3[i] = arr1[i];

    for(int i = 0; i < m; i++)
        arr3[n + i] = arr2[i];

    cout << "Merged array:\n";
    for(int i = 0; i < n + m; i++)
        cout << arr3[i] << " ";

    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int arr[100], n , pos;
    cout<<"Enter no. of elements ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter position to delete: ";
    cin>>pos;

    //shift elements to left
    for(int i = pos-1; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--; //reduce size
    cout<<"Array after deletion: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
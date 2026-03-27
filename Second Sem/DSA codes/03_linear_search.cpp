#include<iostream>
using namespace std;

int main()
{
    int arr[100], n,key,found=-1;
    cout<<"Enter no. of elements: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to search: ";
    cin>>key;
    
    //Linear search
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            found = i;
            break;
        }
    }
    if(found != -1)
        cout<<"Element found at position: "<<found+1;
    else
        cout<<"Element not found";

    return 0;
}

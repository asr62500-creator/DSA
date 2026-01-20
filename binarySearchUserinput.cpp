#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int targetelement){
    int low=0, high=size -1;
    while (high>=low){
        int mid= (low + high)/2;
        if (arr[mid]< targetelement)
        low=mid+1;
        else if (arr[mid]> targetelement)
        high=mid-1;
        else 
        return mid;
    }
    return -1;
}

void test(int result){
    if (result != -1)
        cout << "TargetElement found at index = " << result << endl;
    else
        cout << "TargetElement not found" << endl;

}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array in sorted manner: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int e;
    cout<<"Enter the Target element: ";
    cin>>e;

   test(binarysearch(arr,n,e));


    return 0;
}
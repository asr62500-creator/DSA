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
        cout << "TargetElement found at index " << result << endl;
    else
        cout << "TargetElement not found" << endl;

}
int main(){
    int arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

   test(binarysearch(arr,15,5));


    return 0;
}
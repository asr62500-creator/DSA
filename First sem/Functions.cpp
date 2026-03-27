#include<iostream>
using namespace std;

int add(int a,int b){
    int s;
    return s=a+b;
}
int main ( ) {
    int x,y;
    cout<<"Enter the x and y:";
    cin>>x>>y;

    int sum;
    sum=add(x,y);
    cout<<"Sum of the numbers = "<<sum<<endl;
return 0;
}
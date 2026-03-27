#include<iostream>
using namespace std;

int isfactorial(int a){
    int fact=1;
    for(int i=a;i>=1;i--){
        fact*=i;
    }
    return fact;
}

int main ( ) {
    int n;
    cout<<"Entet the number: ";
    cin>>n;

    isfactorial(n);
    cout<<"Factorial of "<<n<<" is:" <<isfactorial(n)<<endl;
    return 0;
}
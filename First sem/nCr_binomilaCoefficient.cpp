#include<iostream>
using namespace std;

int factorial(int a){
    int fact=1;
    for(int i=a; i>=1; i--){
        fact*=i;
    }
    return fact;
}

int main ( ) {
int n,r;
cout<<"Enter the n and r : ";
cin>>n>>r;

int fact_n = factorial(n);
int fact_r = factorial(r);
int fact_nMr = factorial(n-r);

int bionomial=fact_n/(fact_r*fact_nMr); 
cout <<n<<"C"<<r<<" bionomial solution is = "<< bionomial;
return 0;
}
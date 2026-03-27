#include<iostream>
using namespace std;

int isfactorial(int n){
    int fact=1;
    for(int i=n; i>=1; i++){
        fact*=i;
    }
    return fact;
}
int main ( ) {
    cout<<" factorial is  "<<isfactorial(5)<<endl;
    cout<<" factorial is  "<<isfactorial(10)<<endl;

return 0;
}
#include<iostream>
using namespace std;

class complex{
    public: 
    int x,i;
    complex(int a=0, int b=0){
        x=a;
        i=b;
    }
    complex add( complex c){
        complex temp;
        temp.x=x+ c.x;
        temp.i= i+ c.i;
        return temp;
    }
};
int main ( ) {
    complex c1(2,4), c2(8,6);
    complex c3= c1.add(c2);
    cout<<c3.x<< " +i"<<c3.i;

return 0;
}
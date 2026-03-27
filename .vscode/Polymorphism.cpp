#include<iostream>
using namespace std;

class Add{
    int j,k,l;
    public: 
    void add (int x, int y){
        cout<<"Sum = "<< x+y<<endl;
    }
    void add(int x, int y, int z){
        cout<<"Sum = "<<x+y+z<<endl;
    }

};
int main ( ) {
    Add a1;
    int x,y,z;

    cout<<"Enter two no.s : ";
    cin>>x>>y;

    a1.add(x,y);

    cout<<"Enter two no.s : ";
    cin>>z;
    
    a1.add(x,y,z);

return 0;
}
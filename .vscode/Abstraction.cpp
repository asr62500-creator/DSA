#include<iostream>
using namespace std;
class rt {
    private:
        int l,b,a,p;
    
    public:
    void getdimensions(){
        cout<<"Enter the lenght and breadth : ";
        cin>>l>>b;
    }
    void area(){
        a=l*b;
        cout<<"Area is : "<< a <<endl;
    }
    void perimeter(){
        p=2*(l+b);
        cout<<"Perimeter is : "<<p;
    }
};
int main ( ) {
    rt r1,r2;
    r1.getdimensions();
    r1.area();
    r1.perimeter();
    cout <<endl;
    r2.getdimensions();
    r2.area();
    r2.perimeter();

 
return 0;
}
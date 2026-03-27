#include<iostream>
using namespace std;

class rt{
    int l,b;
    public:
    int a,p;
        void getdata(){
            cout<<"Enter the Lenght and Breadth : ";
            cin>>l>>b;
        }
        void area(){
            a=l*b;
            cout<<"Area of rt : "<<a<<endl;
        }
        void parameter(){
            p=2*(l+b);
            cout<<"Parameter of rt : "<<p<<endl; 
        }

    };

class rt1: public rt{
    int h,v;
    public : 
         void getHeight(){
            cout<<"Enter the height : ";
            cin>>h;
         }
         void volume(){
            v=a*h;
            cout<<"Volume is : "<<v<<endl;
         }

};
int main ( ) {
    rt1 r;
    r.getdata();
    r.area();
    r.parameter();
    r.getHeight();
    r.volume();

return 0;
}
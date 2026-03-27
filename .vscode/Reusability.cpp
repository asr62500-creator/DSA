#include<iostream>
using namespace std;
class rt{
    private:
        int l,b,a,p;
    public:
        void setdata(int x, int y){
          l=x;
          b=y;
        }
        void area(){
            a=l*b;
            cout<<"Area is : "<<a<<endl;
        }
        void perimeter(){
            p=2*(l+b);
            cout<<"Perimeter is : "<<p<<endl;
        }
};
int main ( ) {
    rt r1,r2;
    int x,y;
      r1.setdata(5,6);
      r1.area();
      r1.perimeter();

      r1.setdata(10,20);
      r1.area();
      r1.perimeter();

      r2.setdata(15,6);
      r2.area();
      r2.perimeter();

return 0;
}
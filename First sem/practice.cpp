// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Number{
    int n;
    public:
    Number(int a){
        n=a;
    }
    void operator -(){
       n=-n;
    }
    void display(){
        cout<<" Number is= "<< n;
    }
};
int main() {
   Number n1(5);
   n1.operator -();
   n1.display();

    return 0;
}
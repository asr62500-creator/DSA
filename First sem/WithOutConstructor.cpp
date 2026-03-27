#include<iostream>
using namespace std;

class Student{
    string name;
    int age;
    public: 
   void setdata(){
    cout<<"Enter the name: ";
    getline(cin,name);
    cout<<"Enter the age: ";
    cin>>age;
   }
   void display(){
    cout<<"Name is: "<<name<<", Age is:"<<age<<endl;
   }
    
};

int main(){
    Student s;
    s.setdata();
    s.display();
    return 0;
}
#include<iostream>
using namespace std;

class Student{
    string name;
    int age;
public:
    Student(string n, int a){
         name=n;
         age=a;
          cout<<"Parameterized constructor called!"<<endl;
    }

    void display(){
         cout<<"Name is: "<<name;
         cout<<", Age is: "<<age<<endl;
    }
};

int main(){
    Student s1("Amit Singh", 22);
    Student s2("Neha", 23);

    s1.display();
    s2.display();

    return 0;
}
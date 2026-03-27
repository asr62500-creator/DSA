#include<iostream>
using namespace std;

class Student{
    string name;
    int age;
  public: 
    Student(string n, int a){
        name=n;
        age=a;
     }
    void display(){
        cout<<"Name is: "<<name<<" , Age is : "<< age <<endl;
    }
};

int main()
{
    Student s1("Amit",23);
    Student s2(s1);

    // s1.display(); 
    s2.display();

    return 0;
}
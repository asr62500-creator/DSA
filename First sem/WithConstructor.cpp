#include<iostream>
using namespace std;

class Student{
    string name;
    int age;
    public:
    Student(){
        name="Amit Singh";
        age = 22;
    }

    void display(){
        cout<<"Name is : "<<name<<", Age is : "<<age; 
    }
    
};int main(){
    Student s1;

    s1.display();
    return 0;
}
#include<iostream>
using namespace std;

class Student{
    string name;
    string subject;
    int age;
public:
    Student (string n, string s, int a){
        name=n;
        subject=s;
        age=a;
    }
    Student(Student &O){
        cout<<"******i am the custom copy constructor********"<<endl;
         name=O.name;
        subject=O.subject;
        age=O.age;      
    }
    void changesubject(string newsubject){
        subject=newsubject;
    }
    void display(){
        cout<<"Name is: "<<name<<", Subject is: "<<subject<<", Age is: "<<age<<endl;
    }
};
 
int main(){
    Student s1("Amit","CS",22);
    s1.changesubject("C++");

    Student s2(s1);
   
    s2.display();

    return 0;
}

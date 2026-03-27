#include<iostream>
using namespace std;

class Student {
   public:          // Access specifier
      char name[50];  // Data member
      int age;      // Data member

      void input(){
         cout<<"Enter the name : ";
         cin>>name;
         cout<<"Enter the age : ";
         cin>>age;
      }

      void display() {   // Member function
         cout << "Name: " << name << ", Age: " << age << endl;
      }
};
int main(){
    Student s1;
    s1.name;
    s1.age;
    s1.input();
    s1.display();
    return 0;
}
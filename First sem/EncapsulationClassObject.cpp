#include<iostream>
using namespace std;

class Student {
   private:
      int age;        // data hidden from outside access

   public:
      void setAge(int a) {   // setter function
        
         if(a > 0)
            age = a;
      }
      int getAge() {         // getter function
         return age;
      }
};

int main() {
   Student s1;
   s1.setAge(20);             // Access through function
   cout << "Age: " << s1.getAge();
   return 0;
}

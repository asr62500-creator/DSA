#include<iostream>
using namespace std;

class Teacher{
    private:
    double salary;
    public:
    char name[20];
    char dept[30];
    char subject;
    int age;

    void setsalary(int s){
        if(s>0){
            salary=s;
        }

    }
    int getsalary(){
        return salary;
    }

    Teacher(){
        dept = " Computer Science ";
    }

    void display(){
        cout<<"Name : "<< name<< endl;
        cout<<"dept : "<< dept<< endl;
        cout<<"subject : "<< subject<< endl;
        cout<<"age : "<< age<< endl;
        cout<<"Salary : "<< salary<< endl;
    }
    
};
int main ( ) {
 Teacher t1;
 t1.setsalary(85000);
  
 t1.display();
return 0;
}
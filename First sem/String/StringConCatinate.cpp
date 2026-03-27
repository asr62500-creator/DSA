#include<iostream>
using namespace std;

void Xstrcat(char str1[],char str2[]){
    int i=0,j=0;
    
    while(str1[i]!=0){
        i++;
    }
    while(str2[j]!=0){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';

    cout<<"After Concatenation the steing is: "<< str1;
}

int main ( ) {

    char str1[100],str2[100];
    cout<<"Enter the first String: ";
    cin.getline(str1,100);

    cout<<"Enter the first String: ";
    cin.getline(str2,100);

    Xstrcat(str1,str2);
return 0;
}
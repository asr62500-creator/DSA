#include<iostream>
using namespace std;

void Xstrcpy(char source[], char destination[]){
    int i=0;
    while (source[i]!=0){
        destination[i]=source[i];
        ;i++;
    }
    destination[i]='\0';

    cout<<"After copying, Destination string is : "<<destination;
}
int main ( ) {
    char source[100],destination[100];

    cout<<"Enter the Source string : ";
    cin.getline(source,100);

    Xstrcpy(source,destination);
return 0;
}
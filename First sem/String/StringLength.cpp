#include<iostream>
using namespace std;
// //function prototype
// int Xstrlen(char str[] )


int Xstrlen(char str[] ){
    int l=0;
    while(str[l]!='\0'){
        l++;
    }return l;
}

int main ( ) {
char str[50];
cout<<"Enter string : ";
cin.getline(str,50);
// userdefine function call
int x= Xstrlen(str);

cout<<"Length is : "<<x<<endl;

return 0;
}
// //function definition
// int Xstrlen(char str []){
//      int L=0;
//     while(str[L]!='\0'){
//         L++;
//     }
//     return L;
// }
#include<iostream>
using namespace std;

void Xstrcmp(char str1[], char str2[]){
    int i=0;
    
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            if (str1[i] > str2[i]) {
                cout << "String 1 is greater than String 2." << endl;
            } else {
                cout << "String 1 is smaller than String 2." << endl;
            }
            return; // Exit immediately after finding first difference
        }
        i++; // Move to next character
    }

    if(str1[i]=='\0' && str2[i]=='\0'){
        cout<<"String 1= String 2 i.e., Both are Equal"<<endl;
    }
    else if( str1[i]=='\0'){
        cout<<"String 1 is smaller than string 2"<<endl;
    }
    else{
        cout<<"String 1 is greater than string 2";
    }
}
int main ( ) {
    char str1[100],str2[100];
    cout<<"Enter the first string: ";
    cin.getline(str1,100);
    cout<<"Enter the second string: ";
    cin.getline(str2,100);

    Xstrcmp(str1,str2);

return 0;
}
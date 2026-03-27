#include<iostream>
#include<cstring>
using namespace std;

char* XstrReverse(char str[]) {
    int len = strlen(str);        // find length
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];       // swap characters
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;   // return the reversed string
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Reversed string: " << XstrReverse(str);
    return 0;
}

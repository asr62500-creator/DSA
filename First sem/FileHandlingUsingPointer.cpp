#include<iostream>
#include<fstream>
using namespace std;

int main (){
    ofstream fout;

    fout.open("file.txt", ios::out );
    fout<<"HELLO";
    cout<<"Write Pointer position after writing= "<< fout.tellp()<<endl;

    fout.seekp(2);
    fout<<"X";
    cout<<"Write pointer position after seekp= "<< fout.tellp()<<endl;

    fout.close();

    ifstream fin;

    fin.open("file.txt", ios::in);
    cout<<"Read pointer position= "<<fin.tellg()<<endl;

    fin.seekg(0);

    char ch;
    fin>>ch;
    cout<<"First Character= "<<ch<<endl;

    fin.close();
    
    return 0;
}
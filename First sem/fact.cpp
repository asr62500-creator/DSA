#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter any no. = ";
    cin >> n;
    long long fact = 1;

    if (n< 1)
    {
        cout << "enter no. greater than 1";
    }
    for (int i = 0; i <=1; i++)
    {
        fact = fact * i;
    }
    cout<<"factorial of "<<n<<"="<<fact;
    return 0;
}
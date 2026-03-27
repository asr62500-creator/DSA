#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int a) {
    int originalNumber = a, sum = 0, digits = 0;
    
    // Counting digits of the entered number
    int temp = a;
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    // Finding the cubes of each digits and the sum of them
     temp=a;
    while (temp != 0) {
        int remainder = temp % 10;
        sum += ceil(pow(remainder, digits));
        temp = temp / 10;
    }

    return sum == originalNumber; // comparison, not assignment
}

int main() {
    int n;
    cout << "Enter any number : ";
    cin >> n;
    
 // print the no is Armstrong or not
    if (isArmstrong(n))
        cout << "The number " << n << " is an Armstrong number." << endl;
    else
        cout << "The number " << n << " is not an Armstrong number." << endl;

    return 0;
}

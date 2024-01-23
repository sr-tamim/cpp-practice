/*
1. Write a program that calculates and prints the remainder of dividing 15 by 4.
*/

#include <iostream>
using namespace std;

int main() {
    int a = 15;
    int b = 4;
    int remainder = a % b;
    cout << "The remainder of dividing " << a << " by " << b << " is " << remainder << endl;
    return 0;
}
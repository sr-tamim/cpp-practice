/*
1. Write a program where you declare an integer, a float, and a char, then print the address of each variable using a pointer.
*/

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    float b = 5.5;
    char c = 'a';
    
    int *pointA = &a;
    float *pointB = &b;
    char *pointC = &c;

    cout << "Address of a: " << pointA << endl;
    cout << "Address of b: " << pointB << endl;
    cout << "Address of c: " << pointC << endl;
    return 0;
}
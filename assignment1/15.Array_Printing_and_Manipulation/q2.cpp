/*
2. Write a program that initializes an array of characters (a string) and changes a specific character, then prints the original and modified string.
*/

#include <iostream>
using namespace std;

int main() {
    char arr[10] = "Hello";
    arr[0] = 'h';
    cout << arr << endl;
    return 0;
}
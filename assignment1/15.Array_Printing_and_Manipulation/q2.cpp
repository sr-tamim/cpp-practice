/*
2. Write a program that initializes an array of characters (a string) and changes a specific character, then prints the original and modified string.
*/

#include <iostream>
using namespace std;

int main() {
    char arr[10] = "Hello";
    // print the array
    cout << "Original array: " << arr << endl;

    // change the first character
    arr[0] = 'G';
    // print the modified array
    cout << "Modified array: " << arr << endl;
    return 0;
}
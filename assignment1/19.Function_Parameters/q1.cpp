/*
1. Write a function that takes a string and an integer (name and age) and prints a greeting message.
*/

#include <iostream>
using namespace std;

void greet(string name, int age) {
    cout << "Hello " << name << ", you are " << age << " years old." << endl;
}

int main() {
    string name;
    int age;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    greet(name, age);
    return 0;
}
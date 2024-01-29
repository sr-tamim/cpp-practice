/*
1. Write a program to read a file named "input.txt" and print each line to the console.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;
    file.open("squares.txt");
    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
    return 0;
}
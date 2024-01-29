/*
2. Create a program to write the first 10 squares (1, 4, 9, ..., 100) to a file called "squares.txt", then read the file and print its content to the console.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("squares.txt");
    for (int i = 1; i <= 10; i++)
    {
        file << i * i << endl;
    }
    file.close();

    ifstream file2;
    file2.open("squares.txt");
    string line;
    while (getline(file2, line))
    {
        cout << line << endl;
    }
    file2.close();
    return 0;
}

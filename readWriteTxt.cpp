#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file ("readTxt.txt");
    ofstream file2 ("readWriteTxt.txt");
    int n, firstNum, secondNum;
    string sign, garbage;
    file >> n;
    for (int i = 0; i < n; i++)
    {
        file >> garbage >> firstNum >> sign >> secondNum;
        if (sign == "+")
            file2 << firstNum + secondNum << endl;
        else if (sign == "-")
            file2 << firstNum - secondNum << endl;
        else if (sign == "*")
            file2 << firstNum * secondNum << endl;
        else if (sign == "/")
            file2 << firstNum / secondNum << endl;
    }
    file.close();
    return 0;
}

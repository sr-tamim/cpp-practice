/*
1. Write a recursive function to calculate the sum of numbers from 1 to n.
*/

#include<iostream>
using namespace std;

int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Sum of numbers from 1 to " << n << " = " << sum(n) << endl;
    return 0;
}

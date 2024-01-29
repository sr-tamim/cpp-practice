/*
2. Create a program that determines shipping cost based on weight and distance: less than 5 kg, more than 5 kg but less than 20 kg, and more than 20 kg.
*/

#include <iostream>

using namespace std;

int main()
{
    double weight, distance, cost;

    cout << "Enter weight: ";
    cin >> weight;

    cout << "Enter distance: ";
    cin >> distance;

    if (weight < 5)
    {
        cost = 1.10 * distance;
    }
    else if (weight >= 5)
    {
        if (weight < 20)
        {
            cost = 2.20 * distance;
        }
        else
        {
            cost = 3.70 * distance;
        }
    }

    cout << "Cost: " << cost << endl;

    return 0;
}
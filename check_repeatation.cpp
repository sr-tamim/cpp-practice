/*
Write a method that takes in an array as a parameter and counts the repetition of each
element. That is, if an element has appeared in the array more than once, then its
‘repetition’ is its number of occurrences. The method returns true if there are at least
two elements with the same number of ‘repetition’. Otherwise, return false.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct element
{
    int value;
    int repetition;
};

// check_repetation function will check for repetation in array
// and return true if there are at least two elements with the same number of ‘repetition’
// otherwise, return false.
// example: {1, 2, 3, 4, 5, 6, 7, 7} will return false
// example: {1, 2, 3, 4, 5, 6, 6, 7, 7, 7} will return also false
// example: {1, 2, 3, 4, 5, 6, 6, 6, 7, 7, 7} will return true
bool check_repetation(vector<int> arr)
{
    vector<element> elements;
    for (int i = 0; i < arr.size(); i++)
    {
        bool found = false;
        for (int j = 0; j < elements.size(); j++)
        {
            if (elements[j].value == arr[i])
            {
                elements[j].repetition++;
                found = true;
                break;
            }
        }
        if (!found)
        {
            element e;
            e.value = arr[i];
            e.repetition = 1;
            elements.push_back(e);
        }
    }
    // now we have all elements with their repetition
    // we need to check if there are at least two elements with the same number of ‘repetition’
    for (int i = 0; i < elements.size(); i++)
    {
        if (elements[i].repetition == 1)
            continue;
        for (int j = i + 1; j < elements.size(); j++)
        {
            if (elements[i].repetition == elements[j].repetition)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<int> arr;
    int size;
    cout << "Enter array size: ";
    cin >> size;
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    // print array
    cout << endl << "Array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl << endl;

    // check repetation
    if (check_repetation(arr))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    cout << endl;
    return 0;
}

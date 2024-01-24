#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool check_repetation(const vector<int>& arr) {
    unordered_map<int, int> elementRepetitions;
    for (const auto& i : arr) {
        if (elementRepetitions.count(i)) {
            elementRepetitions[i]++;
        } else {
            elementRepetitions[i] = 1;
        }
    }
    // store all the values in another unordered map
    unordered_map<int, int> repetitions;
    for (const auto& i : elementRepetitions) {
        if (i.second == 1) continue;
        if (repetitions.count(i.second)) {
            return true;
        } else {
            repetitions[i.second] = 1;
        }
    }
    return false;
}

int main() {
    vector<int> arr;
    int size;
    cout << "Enter array size: ";
    cin >> size;
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    // print array
    cout << endl << "Array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl << endl;

    // check repetation
    if (check_repetation(arr)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    cout << endl;
    return 0;
}
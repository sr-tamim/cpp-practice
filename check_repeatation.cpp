#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool check_repetation(const unordered_map<int, int>& elementRepetitions) {
    // store all the values in another unordered map
    unordered_map<int, int> repetitions;
    for (const auto& i : elementRepetitions) {
        // if repetation of any element is greater than 1 then return true
        if (i.second > 1 && ++repetitions[i.second] > 1) {
            return true;
        }
    }
    return false;
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    vector<int> arr(size);
    unordered_map<int, int> elementRepetation;  // store repetation of each element as key value pair (key = element, value = repetation)

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];                    // input array
        elementRepetation[arr[i]]++;    // increment repetation of element
    }

    // print array
    cout << endl << "Array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl << endl;

    // check repetation
    if (check_repetation(elementRepetation)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    cout << endl;
    return 0;
}
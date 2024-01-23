/*
2. Create a while loop that prints numbers from 1 to 10 but skips numbers divisible by 5.
*/

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 10) {
        if (i % 5 == 0) {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }
    return 0;
}
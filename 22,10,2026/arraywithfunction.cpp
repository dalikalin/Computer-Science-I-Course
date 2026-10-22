// Write a Ct+ program that:
// 1. Declares an integer array of size 3.
// 2. Asks the user to enter values for the first two elements.
// 3. Passes these two elements to a function named add.
// 4. The function returns their sum.
// 5. Stores the sum in the third array element and displays it.
#include <iostream>
using namespace std;
int sum (int a, int b) {
        return a + b;
    }
int main () {
    int integer[3];

    for (int i=0; i<2; i++) {
        cout << "Enter value number " << i + 1 << ": ";
        cin >> integer[i];
    }

    integer[2] = sum (integer[0], integer[1]);

    cout << "All the element are: ";

    for (int i=0; i<3; i++) {
        cout << integer[i] << " ";
    }
    return 0;
}
// Write a C++ program that:
// 1. Stores {7, 4, 9, 2} in an array;
// 2. Uses two nested For loops to sort the numbers from smallest to largest.
// 3. Displays the array after each pass.
// 4. Display the final sorted array.
#include <iostream>
using namespace std;
int main () {
    int num[4] = {7, 4, 9, 2};

    //show the original elements
    cout << "The original elements of the array: ";
    for (int i=0; i<4; i++) {
        cout << num[i] << " ";
    }

    cout << endl;
    //sorting process
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (num[j] > num[j+1]) {
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }

        //show each pass
        cout << "Pass number " << i + 1 << ": ";
        for (int k=0; k<4; k++) {
            cout << num[k] << " ";
        }
        cout << endl;
    }

    //show result
    cout << "After sorting: ";
    for (int i=0; i<4; i++) {
        cout << num[i] << " ";
    }
    return 0;
}
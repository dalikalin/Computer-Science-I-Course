// Write a C++ program that asks the user for a positive integer and prints its multiplication table from 1 to 10.
// For example, if the user enters 3, the output should look like this:
// Enter a number: 3
// 3 x 1 = 3
// 3 x 2 = 6
// 3 x 3 = 9
// 3 x 4 = 12
// 3 x 5 = 15
// 3 x 6 = 18
// 3 x 7 = 21
// 3 x 8 = 24
// 3 x 9 = 27
// 3 x 10 = 30
// Hint: You only need one for loop for this challenge. Use a counter from 1 to 10 and calculate num * i.
#include <iostream>
using namespace std;
int main () {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <0) {
        cout << "Invalid input";
    }
    
    else {
        for (int j=0; j<10; j++) {
            cout << n << " x " << j+1 << " = " << n*(j+1) << endl;
        } 
    }
    return 0;
}
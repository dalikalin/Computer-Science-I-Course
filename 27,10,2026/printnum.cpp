// Write a complete C++ program that:
// 1. Asks the user to enter a positive integer n.
// 2. Uses a for loop to print every number from 1 to n.
// 3. Prints each number on a separate line.
#include <iostream>
using namespace std;
int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <=0) {
        cout << "Invalid input";
    }
    else {
        for (int i=1; i<=num; i++) {
            cout << i << endl;
        }
    }
    return 0;
}
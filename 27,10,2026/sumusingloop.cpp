// Write a complete C++ program that:
// 1. Asks the user to enter a positive integer n.
// 2. Calculates the sum of all integers from 1 through n.
// 3. Prints the final sum.
// 4. Rejects zero and negative inputs.
#include <iostream>
using namespace std;
int main() {
    int num;
    int total = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <=0) {
        cout << "Invalid input";
    }
    else {
        for (int i=1; i<=num; i++) {
        total += i;
    }
    cout << "Total: " << total; 
    }
    return 0;
}
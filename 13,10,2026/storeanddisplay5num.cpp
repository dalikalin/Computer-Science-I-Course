// Objective: Learn how to store multiple values in an array and display them using a loop.
// Instructions:
// 1. Create an integer array named numbers that can store 5 integers.
// 2. Use a for loop to ask the user to enter 5 numbers.
// 3. Store each number in the array.
// 4. Use another for loop to display all 5 numbers.
// 5. Display the numbers in the same order the user entered them.
#include <iostream>
using namespace std;
int main () {
    int numbers[5];
    for (int i=0; i<=4; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    cout << "Numbers in the array:" << endl;
    for (int i=0; i<=4; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}
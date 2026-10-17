// Objective: Learn how to access array elements and calculate their sum.
// Instructions:
// 1. Create an integer array named numbers that can store 5 integers.
// 2. Create an integer variable named sum and initialize it to 0.
// 3. Use a for loop to ask the user to enter 5 numbers.
// 4. Store each number in the array.
// 5. Use another for loop to add each array element to sum.
// 6. Display the total sum.
#include <iostream>
using namespace std;
int main () {
    int numbers[5];
    int sum = 0;

    for (int i = 0; i<5; i++) {
        cout << "Enter number "<< i + 1 << ": ";
        cin >> numbers[i];
    }
    for (int i = 0; i<5; i++) {
        sum += numbers[i];
    }
    cout <<"Sum = " << sum;
    return 0;
}
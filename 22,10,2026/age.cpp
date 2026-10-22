// Write a complete C++ program that asks the user to enter their age.
// Rules:
// - If age is below 0 or above 120, print Invalid age.
// - Otherwise, if age is at least 18, print Adult.
// - Otherwise, print Minor.

#include <iostream>
using namespace std;
int main () {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 0 || age > 120) {
        cout << "Invalid age";
    }
    else if (age >= 18) {
        cout << "Adult";
    }
    else {
        cout << "Minor";
    }
    return 0;
}
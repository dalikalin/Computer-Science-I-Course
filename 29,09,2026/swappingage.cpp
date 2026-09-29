// 2.Write a C++ program that:
// Asks the user to enter two ages.
// Displays the ages before swapping.
// Swaps their values using a temporary variable.
// Displays the ages and before after swapping.
#include <iostream>
using namespace std;

int main() {
    int age1, age2;
    int temp;

    cout << "Enter the first age: ";
    cin >> age1;
    cout << "Enter the second age: ";
    cin >> age2;

    cout << "\n--- Before Swapping ---" << endl;
    cout << "Age 1: " << age1 << endl;
    cout << "Age 2: " << age2 << endl;

    temp = age1;
    age1 = age2;
    age2 = temp;

    
    cout << "\n--- After Swapping ---" << endl;
    cout << "Age 1: " << age1 << endl;
    cout << "Age 2: " << age2 << endl;

    return 0;
}
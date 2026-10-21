//Write a C++ program that stores five students' first names in a string array. Use a loop to call the names from the keyboard and another look to display each name on a separate line.
#include <iostream>
#include <string>
using namespace std;
int main () {
    string students[5];
    for (int i=0; i<5; i++) {
        cout << "Enter student name number " << i + 1 << ": ";
        cin >> students[i];
    }
    for (int i=0; i<5; i++) {
        cout << "Name number " << i + 1 << " is: " << students[i] << endl;
    }
    return 0;
}
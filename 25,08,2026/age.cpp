#include <iostream>
using namespace std;
int main () {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is " << age << "." << endl;
    age += 1;
    cout << "Next year you will be " << age << ".";
    return 0;
}
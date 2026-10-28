#include <iostream>
using namespace std;
int main () {
    char name[50];

    cout << "Enter your name: ";
    cin.getline(name, 50);

    cout << "Your name is " << name;
    return 0;
}
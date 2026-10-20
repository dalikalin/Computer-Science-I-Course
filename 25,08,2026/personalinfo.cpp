#include <iostream>
#include <string>
using namespace std;
int main () {
    string name;
    int age;
    string favsub;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(1000, '\n');
    cout << "Enter your favourite subject: ";
    getline(cin, favsub);

    cout << endl << "--- Your Information ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Favourite subject: " << favsub;
    return 0;
}
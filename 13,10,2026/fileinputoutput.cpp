// read that information from input.txt and display it on the screen.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream input("input.txt");

    string name;
    int age;
    double gpa;

    input >> name;
    input >> age;
    input >> gpa;

    cout << "My name is " << name << "."<< endl;
    cout << "I am " << age << " years old." << endl;
    cout << "My GPA is " << gpa << "." << endl;

    input.close();
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    string name;
    int age;
    double gpa;
    char grade;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gpa: ";
    cin >> gpa;
    cout << "Enter your grade: ";
    cin >> grade;

    cout << endl
         << "Therefore, your student imformation is: " << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}
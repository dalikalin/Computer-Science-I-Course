#include <iostream>
#include <string>
using namespace std;
class student {
    public:
        string name;
        int ID;
        int age;
};
int main () {
    student s1;
    s1.name = "Mouyteang";
    s1.ID = 2025370;
    s1.age = 20;

    student s2;
    s2.name = "Dalika";
    s2.ID = 2025631;
    s2.age = 20;

    cout << "Name: " << s1.name << endl
         << "ID: " << s1.ID << '\n'
         << "Age: " << s1.age << '\n';
    cout << "Name: " << s2.name << endl
         << "ID: " << s2.ID << '\n'
         << "Age: " << s2.age << '\n';

    return 0;
}
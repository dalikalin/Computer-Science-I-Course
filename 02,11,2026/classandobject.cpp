#include <iostream>
using namespace std;
class student {
    public:
        string name;
        int age;
        double score;

        void introduce() {
        cout << "My name is " << name << endl;
        cout << "I am " << age << " years old." << endl;
    }
    };
int main() {
    student s1;
    s1.name = "Dalika";
    s1.age = 20;
    s1.score = 95.5;

    student s2;
    s2.name = "Mouyteang";
    s2.age = 20;
    s2.score = 95.5;

    s1.introduce();
    s2.introduce();
    return 0;
}
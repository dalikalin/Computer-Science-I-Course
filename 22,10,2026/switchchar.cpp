#include <iostream>
using namespace std;
int main() {
    char grade;

    cout << "Enter your grade: ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Your asian parent says that it is bare minimum.";
            break;
        case 'B':
            cout << "B means Below average";
            break;
        case 'C':
            cout << "C means Can't eat dinner";
            break;
        case 'D':
            cout << "D means Don't come home";
            break;
        case 'E':
            cout << "E means Ewww";
            break;
        case 'F':
            cout << "F means Find a new family";
            break;
    }
    return 0;
}
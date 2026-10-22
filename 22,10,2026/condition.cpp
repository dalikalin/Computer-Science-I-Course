// Now write a complete C++ program that:
// 1. Asks the user to enter a score.
// 2. Uses if, else if, and else to determine the grade.
// 3. Prints the grade according to these rules:
// Score	Grade
// 90–100	A
// 80–89	B
// 70–79	C
// 60–69	D
// Below 60	F
#include <iostream>
using namespace std;
int main () {
    int score;

    cout << "Enter a score: ";
    cin >> score;
    if (score < 0 || score > 100) {
        cout << "Invalid score";
    }
    else if (score >= 90) {
        cout << "Grade: A";
    }
    else if (score >= 80) {
        cout << "Grade: B";
    }
    else if (score >= 70) {
        cout << "Grade: C";
    }
    else if (score >=60) {
        cout << "Grade: D";
    }
    else {
        cout << "Grade: F";
    }
    return 0;
}
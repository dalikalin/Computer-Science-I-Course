// Problem 1: Display a Student Grade. Write a program that asks the user to enter a student's score from O to 100. Create a void function named displayGrade() that receives the score by value and displays the corresponding letter grade. Assume the user enters a valid score. Grade ranges: 90-100 = A; 80-89 = B; 70-79 = C; 60-69 = D; 0-59 = F. Ask the user to enter the score in main(). Call displayGrade() with the score as its argment. Use if / else if / else inside the function to display the grade. The function must not return a value.
#include <iostream>
using namespace std;
void displayGrade(double a, char & result) {
    if (a >= 90) {
        result = 'A';
    }
    else if (a >= 80) {
        result = 'B';
    }
    else if (a >= 70) {
        result = 'C';
    }
    else if (a >= 60) {
        result = 'D';
    }
    else if (a >= 0) {
        result = 'F';
    }
    else {
        result = 'I';
    }
}
int main () {
    double score;
    char answer;

    cout <<"Enter the score: ";
    cin >> score;

    displayGrade(score, answer);

    if (answer == 'I') {
        cout <<"Invalid input";
    }
    else {
       cout <<"Your grade is "<<answer; 
    }
    return 0;
}

// OR we can write like this

#include <iostream>
using namespace std;

void displayGrade(double score) {
    if (score >= 90) {
        cout << "Your grade is A";
    }
    else if (score >= 80) {
        cout << "Your grade is B";
    }
    else if (score >= 70) {
        cout << "Your grade is C";
    }
    else if (score >= 60) {
        cout << "Your grade is D";
    }
    else {
        cout << "Your grade is F";
    }
}

int main() {
    double score;

    cout << "Enter the score: ";
    cin >> score;

    displayGrade(score);

    return 0;
}
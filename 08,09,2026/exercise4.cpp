//Write a C++ program that asks the user to enter 5 test scores and then display the average.

#include <iostream>
using namespace std;
int main () {
    double testscore;
    double sum = 0;
    for (int i = 1; i <= 5; i++) {
        cout << "Enter the test score: ";
        cin >> testscore;
        sum += testscore;
    }
    double average = sum / 5;
    cout <<"The average score is: "<< average;
    return 0;
}
//Write a recursive C++ function that returns the sum of the integers from 1 through n
#include <iostream>
using namespace std;
void sum(int n) {
    if (n < 0) {
        return;
    }

    sum(n - 1);
}
int main () {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    sum(num);
    return 0;
}
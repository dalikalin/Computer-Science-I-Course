//Write a recursive C++ function that prints all even numbers from 0 through n in.
#include <iostream>
using namespace std;
void printeven(int n) {
    if (n < 0) {
        return;
    }

    printeven(n - 1);

    if (n % 2 == 0) {
        cout << n << " ";
    }
}
int main () {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    printeven(num);
    return 0;
}
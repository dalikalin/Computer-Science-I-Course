//Write a recursive C++ function that prints the numbers from 0 up to n.
#include <iostream>
using namespace std;

void countup(int n) {

    if (n < 0) {
        return;
    }

    countup (n - 1);

    cout << n << " ";
}

int main () {
    int num;

    cout << "Enter the number to countup until: ";
    cin >> num;

    countup(num);
    
    return 0;
    
}
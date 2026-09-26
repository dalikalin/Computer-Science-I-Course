#include <iostream>
#include <cmath>
using namespace std;

int oddoreven(int num) {
    if (num % 2 == 0) {
        return 1;
    }
    else {
        return -1;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = oddoreven(num);

    if (result == 1) {
        cout << "This is an even number.";
    }
    if (result == -1) {
        cout << "This is an odd number.";
    }
    return 0;
}
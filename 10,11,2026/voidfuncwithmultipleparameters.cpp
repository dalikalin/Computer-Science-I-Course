#include <iostream>
using namespace std;

void addnum(int a, int b) {
    int sum = a + b;
    cout << "Sum: " << sum;
}

int main () {
    int m, n;

    cout << "Enter the first number: ";
    cin >> m;
    cout << "Enter the second number: ";
    cin >> n;

    addnum(n, m);
    return 0;
}
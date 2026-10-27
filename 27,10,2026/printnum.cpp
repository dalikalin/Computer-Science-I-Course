#include <iostream>
using namespace std;
int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <=0) {
        cout << "Invalid input";
    }
    else {
        for (int i=1; i<=num; i++) {
            cout << i << endl;
        }
    }
    return 0;
}
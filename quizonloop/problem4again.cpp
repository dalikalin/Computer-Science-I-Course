#include <iostream>
using namespace std;
int main () {
    int num;

    do {
        cout << endl <<"Enter a number from 1 to 10: ";
        cin >> num;
        if (num < 1 || num > 10) {
            cout <<"Try again";
        }
        
    }
    while (num < 1 || num > 10);
    return 0;
}
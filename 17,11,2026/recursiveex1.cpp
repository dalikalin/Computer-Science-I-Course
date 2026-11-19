//Write a recursive C++ function that prints the numbers from n down to 0.
#include <iostream>
using namespace std;

// //use normal function
// int countdown (int n) {
//     if (n < 0) {
//         return 0;
//     }
//     cout << n << " ";

//     countdown (n-1);

//     return n;
// }

// int main () {
//     int num;

//     cout << "Enter the number to countdown from: ";
//     cin >> num;

//     countdown(num);
//     return 0;
// }

//use void function
void countdownvoid (int n) {
    if (n < 0) {
        return;
    }

    cout << n << " ";

    countdownvoid (n - 1);
}

int main () {
    int num;

    cout << "Enter the number to countdown from: ";
    cin >> num;

    countdownvoid (num);
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main () {
    string students[5];
    for (int i=0; i<5; i++) {
        cout << "Enter student name number " << i + 1 << ": ";
        cin >> students[i];
    }
    for (int i=0; i<5; i++) {
        cout << "Name number " << i + 1 << " is: " << students[i] << endl;
    }
    return 0;
}
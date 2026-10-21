//Create an integer array containing six numbers. Display all the numbers, then display only the even numbers.
#include <iostream>
using namespace std;
int main () {
    int integer[6] = {5,10,15,20,25,30};
    cout << "All elements: ";
    for (int i=0; i<6; i++) {
        cout << integer[i] << " ";
    }
    cout << endl << "Even number: ";
    for (int i=0; i<6; i++) {
        if (integer[i] % 2 == 0) {
            cout << integer[i] << " ";
        }
    }
    return 0;
}
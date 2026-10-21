//Write a C++ program that creates a character array containing the grades A, B, C, and D. Display the original grades using a loop. Then change the third grade from C to A and display the updated grades using another loop.
#include <iostream>
using namespace std;
int main() {
    char grades[4] = {'A', 'B', 'C', 'D'};

    cout << "The original grades are: ";
    for (int i=0; i<=3; i++) {
        cout << grades[i] << " ";
    }

    cout << endl << "The updated grades are: ";
    grades[2]='A';
    for (int i=0; i<=3; i++) {
        cout << grades[i] << " ";
    }
    return 0;
}
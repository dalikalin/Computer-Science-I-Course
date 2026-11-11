//Given an array of integers, determine whether any number appears more than once. Display “Duplicate found” if a repeated number exists; otherwise, display “No duplicates.”
#include <iostream>
using namespace std;
int main() {
    int a[12] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 10, 60, 70};
    for (int i=0; i<12; i++) {
        for (int k = i + 1; k<12; k++) {
            if (a[i] == a[k]) {
                cout << "Duplicate found";
                return 0;
            }
        }
    }
    cout << "No duplicates";
    return 0;
}
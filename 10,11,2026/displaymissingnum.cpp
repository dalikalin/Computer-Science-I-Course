//An array contains n distinet integers selected from the numbers 0 through n. Exactly one number is missing. Write a program to find and display the missing number.
#include <iostream>
using namespace std;
int main () {
    int arraysum = 0;

    int a [] = {0, 1, 2, 3, 4, 5, 7, 8, 9, 10};
    int n = 10;

    for (int i=0; i<n; i++) {
        arraysum += a[i];
    }
    
    int sum = n * (n + 1) / 2;

    int missing = sum - arraysum;

    cout << "The missing number is: " << missing << endl;

    return 0;
}
//Given a one-dimensional array of integers and a target number, find two different elements whose sum equals the target. Display their indices. If multiple pairs exist, display any one pair.
#include <iostream>
using namespace std;
int main () {
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int targetnum = 10;
    
    for (int i=0; i<11; i++) {
        for (int k = i + 1; k<11; k++) {
            if (a[i] + a[k] == targetnum) {
                cout << "The pair is: "<< a[i] << " and "<< a[k] << endl;
                cout << "The indices are: " << "[" << i << "]" " and " "[" << k << "]" << endl;
                return 0; //As soon as a pair is found, the program prints it and ends, so only one pair is displayed
            }
        }
    }
    cout << "Pair not found.";
    return 0;
}
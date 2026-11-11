//Given a one-dimensional array of integers and a target number, find two different elements whose sum equals the target. Display their indices. If multiple pairs exist, display any one pair.
#include <iostream>
using namespace std;
int main () {
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int targetnum = 10;
    
    for (int i=0; i<11; i++) {
        for (int k=0; k<11; k++) {
            if (a[k] + a[k+1] == targetnum) {
                cout << a[k] << a[k+1];
            }
            cout << a[k] << a[k+1];
        } 
    }
    return 0;
}
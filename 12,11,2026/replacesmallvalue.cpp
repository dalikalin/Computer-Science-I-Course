//Replace small values. Change every value less than 4 to 0, then print the updated array. {3, 6, 4, 2, 5, 9, 1}
#include <iostream>
using namespace std;
int main () {
    int a[] = {3, 6, 4, 2, 5, 9, 1};
    int n = 7;

    for (int i=0; i<n; i++) {
        if (a[i] < 4) {
            a[i] = 0;
        }
    }
    
    cout << "The updated array: ";
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
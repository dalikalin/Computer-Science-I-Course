//Check if the array is sorted. Display sorted if every element is less than or equal to the next one. Otherwise, display Not sorted {4, 0, 1, 3, 2, 9, 5}
#include <iostream>
using namespace std;
int main () {
    int a[] = {4, 0, 1, 3, 2, 9, 5};
    int n = 7;
    bool sorted = true;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a [i + 1]) {
            sorted = false;
        }
    }

    if (sorted == true) {
        cout << "Sorted";
    }
    else {
        cout << "Not sorted";
    }
    return 0;
}
// Sort the given array {6, 1, 3, 0, 9, 8}
#include <iostream>
using namespace std;
int main() {
    int a[] = {6, 1, 3, 0, 9, 8};
    int temp;

    for (int i = 0; i < 5 ; i++) {
        for (int k = 0; k < 5; k++) {
            if (a[k] > a[k + 1]) {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }

    cout << "The sorted array: ";
    for (int i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
//For {3, 8, 2, 6, 1} compare each element with the one immediately after it. Count how many times a value is followed by a larger value.
#include <iostream>
using namespace std;
int main () {
    int a[] = {3, 8, 2, 6, 1};
    int n = 5;
    int count = 0;

    for (int i=0; i < n - 1; i++) {
        if (a[i] < a[i+1]) {
            count += 1;
        }
    }

    cout << "Count: " << count;
    return 0;
}
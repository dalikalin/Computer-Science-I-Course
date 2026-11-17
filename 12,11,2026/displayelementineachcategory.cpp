// Count positives, negatives, and zeros. Display how many elements belong to each category {4, -2, 0, -7, 5, 0}
#include <iostream>
using namespace std;
int main () {
    int a[] = {4, -2, 0, -7, 5, 0};
    int n = 6;
    int positive = 0;
    int negative = 0;
    int zero = 0;

    for (int i=0; i<n; i++) {
        if (a[i] > 0) {
            positive += 1;
        }
        if (a[i] == 0) {
            zero += 1;
        }
        if (a[i] < 0) {
            negative += 1;
        }
    }
    
    cout << "Positive number: " << positive << endl;
    cout << "Negative number: " << negative << endl;
    cout << "Zero: " << zero << endl;

    return 0;
}
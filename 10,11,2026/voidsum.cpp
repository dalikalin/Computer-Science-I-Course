#include <iostream>
using namespace std;
void calculateSum(int a, int b) {
    int sum = a + b;
    cout << "Sum: " << sum << endl;
}

int main () {
    calculateSum(10, 5);
    calculateSum(20, 10);
    calculateSum(67, 33);

    return 0;
}
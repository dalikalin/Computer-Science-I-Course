// Find the highest and lowest number.
// 1. Store the values 10, 50, 15, 30, 100, 35 in an array.
// 2. Uses a for loop to find the highest and lowest numbers.
// 3. Displays both result.
#include <iostream>
using namespace std;
int main () {
    int num[6] = {10, 50, 15, 30, 100, 35};
    int highest = num[0];
    int lowest = num[0];

    for (int i=1; i<6; i++) {
        if (num[i] > highest) {
            highest = num[i];
        }
        if (num[i] < lowest) {
            lowest = num[i];
        }
    }

    cout << "The highest number is " << highest << endl;
    cout << "The lowest number is " << lowest;
    return 0;
}
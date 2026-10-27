// Write a program that uses a do-while loop to print numbers from 1 to 5, each on a new line.
// 1. Initialize your counter before the loop.
// 2. Print and increment the counter inside the do block.
// 3. Finish with while (condition); — including the semicolon.
#include <iostream>
using namespace std;
int main() {
    int num = 1;
    do {
        cout << num << endl;
        num++;
    }
    while (num <=5);
    return 0;
}
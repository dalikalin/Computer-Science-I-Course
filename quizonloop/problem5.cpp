#include <iostream>
using namespace std;
int main () {
    int num;
    int count = 1;
    int sumeven = 0;
    int sumodd = 0;

    while (count <= 8) {
        cout <<"Enter number "<<count<< " : ";
        cin >>num;
        count ++;

        if (num % 2 == 0) {
            sumeven ++;
        }
        else {
            sumodd ++;
        }
    }
    cout <<"Even number = "<<sumeven <<endl;
    cout <<"Odd number = "<<sumodd;
    return 0;
}
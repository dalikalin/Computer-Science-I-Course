#include <iostream>
using namespace std;
int main () {
    int num;
    int order = 1;
    int total = 0;

    while (order <= 5) {
        cout << "Enter number "<< order <<" : ";
        cin >> num;
        order ++;

        total +=num;
    }
    cout << "Total = "<<num;
    return 0;
}
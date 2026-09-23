#include <iostream>
#include <iomanip> //(iomanip) stand for Input Output Manipulation
using namespace std;
int main()
{
    double price = 2.5;
    cout << fixed << setprecision(2); // set how many digit appear in decimal number (specially for calculate money)
    cout << price;
    return 0;
}
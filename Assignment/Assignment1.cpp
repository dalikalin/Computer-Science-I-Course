/*
Auther's name: Lin Dalika
Date of writing the program: 29 August 2026
The purpose of this program is to calculate the total value of coins that are inserted by the user into the vending machine.
It calculate the total value in cents and dollars.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // declare number of quarter, dime, nickle as integer
    int numofquarter;
    int numofdime;
    int numofnickel;

    // tell the user to input the number of each coin and store those inputs in the variables that were declared earlier
    cout << "Enter the number of quarters: ";
    cin >> numofquarter;
    cout << "Enter the number of dimes: ";
    cin >> numofdime;
    cout << "Enter the number of nickels: ";
    cin >> numofnickel;

    // calculate those coins into cents
    int sumquarter = numofquarter * 25;
    int sumdime = numofdime * 10;
    int sumnickel = numofnickel * 5;

    // sum all the cents and convert it into dollar
    int sumallcent = sumquarter + sumdime + sumnickel;
    double sumalldollar = sumallcent / 100.0;

    // output the result
    cout << fixed << setprecision(2);
    cout << "The total value is " << sumallcent << " cents or $" << sumalldollar;

    return 0;
}
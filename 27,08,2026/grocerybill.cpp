#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int numofapple;
    int numofbanana;
    int numofmilk;

    cout << "Enter the amount of apple: ";
    cin >> numofapple;
    cout << "Enter the amount of banana: ";
    cin >> numofbanana;
    cout << "Enter the amount of milk bottle: ";
    cin >> numofmilk;

    double applecost = numofapple * 1.25;
    double bananacost = numofbanana * 0.75;
    double milkcost = numofmilk * 2.50;
    double total = applecost + bananacost + milkcost;

    cout << fixed << setprecision(2);
    cout << "The total price is $ " << total;

    return 0;
}
// A restaurant wants a program that works out what a table owes and how much each person
// pays. The bill is the meal price, plus 8% sales tax, plus a tip. The tip is a whole-number percent
// of the meal price (such as 15 or 20).
#include <iostream>
#include <iomanip>
using namespace std;

const double taxrate = 0.08;

// tipcalculation(): takes the meal price and the tip percentage (whole number), and returns the tip amount in dollars.
double tipcalculation(double meal, int tip) {
    return meal * tip / 100.00;
}
// taxcalculation(): takes the meal price and returns the sales tax owed, calculated using the fixed 8% tax rate.
double taxcalculation(double meal) {
    return meal * taxrate;
}
// splitthebill(): takes the total bill amount and the number of people at the table, and returns the amount each person owes.
double splitthebill(double sum, int numppl) {
    return sum / numppl;
}

int main() {
    double mealprice;
    int numofppl;
    int tip;

    cout << "Enter the meal price: $";
    cin >> mealprice;
    while (mealprice <= 0) {
        cout << "Invalid input. Please try again." << endl;
        cout << "Enter the meal price: ";
        cin >> mealprice;
    }

    cout << "Enter the number of people: ";
    cin >> numofppl;
    while (numofppl <= 0) {
        cout << "Invalid input. Please try again." << endl;
        cout << "Enter the number of people: ";
        cin >> numofppl;
    }

    cout << "Enter the amount of tip as percentage: ";
    cin >> tip;
    while (tip < 0) {
        cout << "Invalid input. Please try again." << endl;
        cout << "Enter the amount of tip as percentage: ";
        cin >> tip;
    }

    double tipmoney = tipcalculation(mealprice, tip);
    double taxmoney = taxcalculation(mealprice);
    double total = mealprice + tipmoney + taxmoney;
    double splitbill = splitthebill(total, numofppl);

    cout << fixed << setprecision(2);
    cout << "The total bill is $" << total << endl;
    cout << "Each person bill is $" << splitbill;

    return 0;
}
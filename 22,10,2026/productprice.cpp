// Create an array to store five products prices. Input and display the prices, calculate the total and average, find the highest and lowest price, and count how many prices and above 100.
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double price[5];
    double total = 0;
    double average;
    int abovehun = 0;
    cout << fixed << setprecision(2);

    for (int i=0; i<5; i++) {
        cout << "Enter the price of product number " << i + 1 << ": $";
        cin >> price[i];
    }

    cout << "The price of all five products are ";
    for (int i=0; i<5; i++) {
        cout << price[i] << "$" << " ";
    }

    for (int i=0; i<5; i++) {
        total += price[i];
    }

    cout << endl << "The total is $" << total << endl;

    average = total / 5;

    cout << "The average is $" << average <<endl;

    double highest = price[0];
    double lowest = price[0];

    for (int i=0; i<5; i++) {
        if (price[i] > highest) {
            highest = price [i];
        }
        if (price[i] < lowest) {
            lowest = price[i];
        }
    }

    cout << "The highest price is $" << highest << endl;
    cout << "The lowest price is $" << lowest << endl;

    for (int i=0; i<5; i++) {
        if (price[i] > 100) {
            abovehun++;
        }
    }

    cout << "The number of price that above 100: " << abovehun;

    return 0;
}
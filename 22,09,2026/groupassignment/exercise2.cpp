// Write a C++ program that calculates the total cost of two different products.
// Create a function called calculateTotal() that receives the price of one item and the
// quantity purchased. The function should calculate and return the total cost of the
// product.
// Your program should:
// 1. Ask the user to enter the price and quantity of Product 1.
// 2. Call the calculateTotal() function and display the total cost of Product 1.
// 3. Ask the user to enter the price and quantity of Product 2.
// 4. Call the same calculateTotal() function again and display the total cost of Product 2.
#include <iostream>
#include <iomanip>
using namespace std;

double calculateTotal (double price,int quantity) {
    return price * quantity;
}

int main () {
    double price1, price2;
    int quantity1, quantity2;
    cout <<fixed<<setprecision(2);

    cout <<"Enter the price of product 1: $";
    cin >> price1;
    while (price1 <= 0) {
        cout << "Invalid input. Please try again." << endl;
        cout << "Enter the price of product 1: $";
        cin >> price1;
    }
    cout <<"Enter the quantity of product 1: ";
    cin >> quantity1;
    while (quantity1 <= 0) {
        cout << "Invalid input. Please try again." << endl;
        cout << "Enter the quantity of product 1: ";
        cin >> quantity1;
    }

    double totalp1 = calculateTotal(price1,quantity1);
    cout <<"The total cost of product 1 is $"<<totalp1<<endl;

    cout <<"Enter the price of product 2: $";
    cin >> price2;
    while (price2 <= 0) {
        cout << "Invalid input. Please try again." << endl;
        cout << "Enter the price of product 2: $";
        cin >> price2;
    }
    cout <<"Enter the quantity of product 2: ";
    cin >> quantity2;
    while (quantity2 <= 0) {
        cout << "Invalid input. Please try again." << endl;
        cout << "Enter the quantity of product 2: ";
        cin >> quantity2;
    }

    double totalp2 = calculateTotal(price2,quantity2);
    
    cout <<"The total cost of product 2 is $"<<totalp2;
    return 0;
}
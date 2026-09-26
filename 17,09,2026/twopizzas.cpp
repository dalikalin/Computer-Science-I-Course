// Write a C++ program that helps a customer compare the price of two pizzas.
// The program should ask the user to enter the diameter and price of a pizza.
// Create a function named unitPrice() that receives the pizza diameter and price as parameters.
// Inside the function:
// 1. Calculate the radius of the pizza.
// 2. Calculate the area of the pizza.
// 3. Calculate the price per square unit.
// 4. Return the unit price.
// Use these formulas:
// Radius = Diameter / 2
// Area = 3.14 x Radius × Radius
// Unit Price = Price / Area

#include <iostream> 
#include <cmath>
using namespace std;
double unitPrice(double d, double p) {
    double radius = d / 2;
    double area = 3.14 * radius * radius;
    return p / area;
}
int main () {
    double diameter1, price1, diameter2, price2;

    cout <<"Enter the diameter of the first pizza: ";
    cin >>diameter1;
    cout <<"Enter the price of the first pizza: ";
    cin >>price1;
    cout <<"Enter the diameter of the second pizza: ";
    cin >>diameter2;
    cout <<"Enter the price of the second pizza: ";
    cin >>price2;

    double pizza1 = unitPrice(diameter1, price1);
    double pizza2 = unitPrice(diameter2, price2);

    if (pizza1 == pizza2) {
        cout <<"The two pizzas are at the same price.";
    }
    else if (pizza1 > pizza2) {
        cout <<"The first pizza is more expensive than the second pizza.";
    }
    else {
        cout <<"The second pizza is more expensive than the first pizza.";
    }
    return 0;
}

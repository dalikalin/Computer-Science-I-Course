// Write a C++ program that creates a function called calculateArea() to calculate the area of a rectangle.
// The function should receive two values: the length and the width of the rectangle.
// Your program should:
// 1. Ask the user to enter the length and width of Rectangle 1
// 2. Call the calculateArea () function and display the area of Rectangle 1
// 3. Ask the user to enter the length and width of Rectangle 2
// 4. Call the same calculatera() function again and display the area of Rectangle 2.
// Use this function: double calculateArea(double length, double width);
// Your program must use the same calculateArea function for both rectangles.

#include <iostream>
#include <cmath>
using namespace std;
double calculateArea(double l, double w) {
    return l * w;
}
int main () {
    int length1, width1;
    int length2, width2;

    cout <<"Enter the length of the first rectangle: ";
    cin >>length1;
    cout <<"Enter the width of the first rectangle: ";
    cin >>width1;

    cout <<"The area of the fist rectangle is "<<calculateArea(length1, width1)<<endl;

    cout <<"Enter the length of the second rectangle: ";
    cin >>length2;
    cout <<"Enter the width of the second rectangle: ";
    cin >>width2;

    cout <<"The area of the second rectangle is "<<calculateArea(length2, width2);

    return 0;
}
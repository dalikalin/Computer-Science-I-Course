#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;

    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;

    int division = num1 / num2;
    cout << "The result is " << division;

    return 0;
}
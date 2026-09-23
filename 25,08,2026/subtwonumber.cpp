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

    int sub = num1 - num2;
    cout << "The result is " << sub;

    return 0;
}
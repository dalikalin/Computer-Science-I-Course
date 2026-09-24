#include <iostream>
using namespace std;
int main()
{
    int weight;

    cout << "Enter the weight of a package in pounds: ";
    cin >> weight;

    if (weight <= 0)
    {
        cout << "Invalid weight";
    }
    else if (weight <= 2)
    {
        cout << "The shipping cost is $5.00";
    }
    else if (weight <= 5)
    {
        cout << "The shipping cost is $8.00";
    }
    else if (weight <= 10)
    {
        cout << "The shipping cost is $12.00";
    }
    else
    {
        cout << "The shipping cost is $20.00";
    }
    return 0;
}
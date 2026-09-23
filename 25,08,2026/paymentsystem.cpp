#include <iostream>
using namespace std;
int main()
{
    int hourofwork;
    int paymentrate;

    cout << "Enter your working time in a week: ";
    cin >> hourofwork;
    cout << "Enter your payment rate: $";
    cin >> paymentrate;

    int paymentperweek = hourofwork * paymentrate;
    int paymentpermonth = paymentperweek * 4;

    cout << "Your payment per week is $" << paymentperweek << endl;
    cout << "Your payment per month is $" << paymentpermonth;

    return 0;
}
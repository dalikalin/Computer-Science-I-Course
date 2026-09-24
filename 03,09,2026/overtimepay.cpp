#include <iostream>
using namespace std;

int main()
{
    double hour;
    double payrate;

    cout << "Enter your hour of work per week: ";
    cin >> hour;
    if (hour < 0)
    {
        cout << "Invalid input" << endl;
        return 1; // Exit early if input is invalid
    }

    cout << "Enter your pay rate: ";
    cin >> payrate;
    if (payrate < 0)
    {
        cout << "Invalid input" << endl;
        return 1; // Exit early if input is invalid
    }

    if (hour <= 40)
    {
        double sum = hour * payrate;
        double summonth = sum * 4;
        cout << "Your monthly salary is " << summonth << endl;
    }
    else
    {
        double overtime = hour - 40;
        double forthy = 40 * payrate;
        double payovertime = overtime * payrate * 1.5;
        double sumall = forthy + payovertime;
        double summonthnew = sumall * 4;
        cout << "Your monthly salary is " << summonthnew << endl;
    }

    return 0;
}
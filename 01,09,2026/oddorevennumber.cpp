#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // one way
    int nnum = num % 2;

    if (nnum == 0)
    {
        cout << "This is an even number.";
    }
    else
    {
        cout << "This is an odd number.";
    }

    // another way
    if (num % 2 == 0)
    {
        cout << "This is an even number.";
    }
    else
    {
        cout << "This is an odd number.";
    }
    return 0;
}
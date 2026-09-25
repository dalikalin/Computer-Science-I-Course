// Write a C++ program that keeps asking the user to enter a password until the correct password is entered.

#include <iostream>
using namespace std;
int main()
{
    string correctpw = "lindalika";
    string pw;

    cout << "Enter your password: ";
    cin >> pw;

    if (pw == correctpw)
    {
        cout << "Your password word is correct.";
    }
    else
    {
        while (pw != correctpw)
        {
            cout << "Your password is incorrect." << endl;
            cout << "Enter your password: ";
            cin >> pw;
        }
        cout << "Your password is correct.";
    }
    return 0;
}
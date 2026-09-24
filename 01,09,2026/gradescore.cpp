#include <iostream>
using namespace std;
int main()
{
    double score;

    cout << "Enter your score: ";
    cin >> score;

    if (score < 0 || score > 100)
    {
        cout << "Invalid input";
    }
    else if (score >= 90)
    {
        cout << "Grade: A";
    }
    else if (score >= 80)
    {
        cout << "Grade: B";
    }
    else if (score >= 70)
    {
        cout << "Grade: C";
    }
    else if (score >= 60)
    {
        cout << "Grade: D";
    }
    else if (score >= 50)
    {
        cout << "Grade: E";
    }
    else
    {
        cout << "You failed.";
    }
    return 0;
}
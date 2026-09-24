#include <iostream>
#include <cctype> //in case the input is in lower or upper case
using namespace std;
int main()
{
    char grade;

    cout << "Enter your grade: ";
    cin >> grade;
    grade = toupper(grade); ////in case the input is in lower or upper case

    switch (grade)
    {
    case 'A':
        cout << "Excellent";
        break;

    case 'B':
        cout << "Good";
        break;

    case 'C':
        cout << "Average";
        break;

    case 'D':
        cout << "Needs Improvment";
        break;

    case 'F':
        cout << "Failed";
        break;

    default:
        cout << "Invalid Input";
    }
    return 0;
}

/* you can use #include <cctype> and variable = toupper(variable);
or just assign multiple cases like
        case 'A':
        case 'a':
        cout <<"Excellent";
        break;
*/

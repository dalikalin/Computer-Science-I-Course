//Create a class named Employee with public data members name and montlySalary. Add a member function named annualSalary() that return the montly salary multiplies by 12. In main(), create two employee onjects and display each employee's name and annual salary.
#include <iostream>
using namespace std;
class Employee {
    public:
        string membername;
        double monthlysalary;
        double annual(double i) {
            return monthlysalary * 12;
        }
};
int main () {
    Employee e1;
    cout <<"Enter your name: ";
    cin >> e1.membername;
    cout <<"Enter your monthly salary: $";
    cin >> e1.monthlysalary;

    cout << "Name: " << e1.membername << endl 
        << "Annual Salary: $" <<e1.annual(e1.monthlysalary);
    return 0;
}
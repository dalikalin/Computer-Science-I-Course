#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int firstside;
    int secondside;
    double hypotenuse;

    cout <<"Enter the lengths of the first side: ";
    cin >>firstside;
    cout <<"Enter the lengths of the second side: ";
    cin >>secondside;

    hypotenuse = sqrt(pow(firstside,2) + pow(secondside,2));
    cout <<"The lengths of the hypotenuse is "<<hypotenuse;
    return 0;
}
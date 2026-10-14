#include <iostream>
#include <string>
using namespace std;
int main () {
    int num[5] = {10, 20, 30, 40, 50};
    cout << num[0] << endl;

    // change an array element
    num[4] = 67;
    cout << num[4] << endl;

    // calcualte elements in an array
    int total = num[0] + num[1] + num[2] + num[3] + num[4];
    cout << total << endl;

    // increase an element
    num[0] = num[1] + num[2];
    cout << num[0] << endl;
    num[0] = num[1] + 5;
    cout << num[0] <<endl;

    // use loop to display all elements
    for (int i = 0; i<=4; i++) {
        cout << "Element number " << i << " is " << num[i] << endl;
    }

    // getting array values from the user
    string student[4];

    for (int i=0; i<=3; i++) {
        cout <<"Enter person name number " << i + 1 << " : ";
        cin >> student[i];
    }

    cout << "The people that your are sitting with are: "<< endl;
    for (int i=0; i<=3; i++) {
        cout << student[i] << endl;
    }
    return 0;
}
//Write a C++ program to arrange each array from smallest to largest using bubble sort and two nested loops. Print each array before and after sorting. Do not use sort().
#include <iostream>
using namespace std;
int main () {
    int a1[5];
    int a2[5];
    int temp;

    for (int i=0; i<=4; i++) {
        cout << "Enter first array element number " << i + 1 << ": " ;
        cin >> a1[i];
    }
    cout << endl;
    for (int i=0; i<=4; i++) {
        cout << "Enter second array element number " << i + 1 << ": " ;
        cin >> a2[i];
    }

    cout << endl << "The original element of the first array is: ";
    for (int i=0; i<=4; i++) {
        cout << a1[i] << " ";
    }
    cout << endl << "The original element of the second array is: ";
    for (int i=0; i<=4; i++) {
        cout << a2[i] << " ";
    }
    cout << endl << endl;
    //sorting
    for (int i=0; i<=3; i++) {
        for (int j=0; j<=3; j++) {
            if (a1[j] > a1[j+1]) {
                temp = a1[j];
                a1[j] = a1[j+1];
                a1[j+1] = temp;
            }
        }
        cout << "Pass number " << i + 1 << ": ";
        for (int k=0; k<5; k++) {
            cout << a1[k] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i=0; i<=3; i++) {
        for (int j=0; j<=3; j++) {
            if (a2[j] > a2[j+1]) {
                temp = a2[j];
                a2[j] = a2[j+1];
                a2[j+1] = temp;
            }
        }
        cout << "Pass number " << i + 1 << ": ";
        for (int k=0; k<5; k++) {
            cout << a2[k] << " ";
        }
        cout << endl;
    }

    //display after sorting
    cout << endl << "After sorting: ";
    for (int i=0; i<=4; i++) {
        cout << a1[i] << " ";
    }
    cout << endl << "After sorting: ";
    for (int i=0; i<=4; i++) {
        cout << a2[i] << " ";
    }

    return 0;
}
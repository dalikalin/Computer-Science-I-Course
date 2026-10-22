//Write a C++ program that:
//1. Stores five students' marks in an array.
//2. Displays the original marks.
//3. Uses a loop to add five bonus marks to each students' mark.
//4. Displays the updated marks.
#include <iostream>
using namespace std;
int main () {
    int marks[5] ={90, 91, 92, 93, 94};

    cout << "The original marks are: ";
    for (int i=0; i<5; i++) {
        cout << marks[i] << " ";
    }
    
    // //add with an existing array
    // int bonus[5] = {5, 4, 3, 2, 1};
    // for (int i=0; i<5; i++) {
    //     marks[i] += bonus[i];
    // }
    // cout << endl << "The updated marks are: ";
    // for (int i=0; i<5; i++) {
    //     cout << marks[i] << " ";
    // }

    // //add with user's input
    // int bonus[5];
    // cout << endl << endl;
    // for (int i=0; i<5; i++) {
    //     cout << "Enter the bonus for student number " << i+1 << " : ";
    //     cin >> bonus[i];
    //     marks[i] += bonus[i];
    // }
    // cout << endl << "The updated marks are: ";
    // for (int i=0; i<5; i++) {
    //     cout << marks[i] << " ";
    // }

    return 0;
}
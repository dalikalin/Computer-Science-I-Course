#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main () {
    string name;
    double score;

    ofstream infile ("storeinfo.txt", ios::app);

    cout << "Enter the student name: ";
    getline(cin, name);
    infile << name << endl;
    cout << "Enter the score: ";
    cin >> score;
    infile << score << endl;

    infile.close();
    
    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("student.txt");
    if (!outFile) {
        cerr << "Could not open student.txt for writing.\n";
        return 1;
    }

    outFile << "Mouyteang" <<endl;
    outFile << "Dalika";
    outFile.close();

    ifstream inFile("student.txt");
    if (!inFile) {
        cerr << "Could not open student.txt for reading.\n";
        return 1;
    }

    string name;
    getline(inFile, name);
    cout << name << '\n';
    return 0;
}
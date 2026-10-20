#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main () {
    string name;
    double score;
    ifstream readfile("storeinfo.txt");
    getline (readfile, name);
    cout << name;
    readfile.close();
    return 0;
}
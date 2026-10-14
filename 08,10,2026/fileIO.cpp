#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("fileIO.txt");

    // store info in the file
    outFile << "Mouyteang" << endl;
    outFile << "Dalika" << endl;
    outFile << "Sakona" << endl;
    outFile << "Sopharoth" << endl << endl;

    // also store info in the file
    string title = "Babydoll";
    string lyric = "call me babydoll, come break down these walls, don't leave me alone.";
    string artist = "Ari Abdul";
    double duration = 3.17;

    outFile << "Down below is your favourite song information." << endl;
    outFile << "Title: " << title << endl;
    outFile << "Lyric: " << lyric << endl;
    outFile << "Artist: " << artist << endl;
    outFile << "Duration: " << duration << endl << endl;

    // take input from user and store it in the file
    int num;
    cout <<"Enter a number: ";
    cin >> num;
    outFile << num;

    outFile.close();

    return 0;
}
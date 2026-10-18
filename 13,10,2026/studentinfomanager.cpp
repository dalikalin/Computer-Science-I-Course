// Instructions
// Write a C++ program that performs the following tasks:
// 1. Ask the user to enter their full name, age, and favorite subject.
// 2. Save the information into a text file named student.txt.
// 3. Close the file after writing.
// 4. Open student.txt again for reading.
// 5. Display the information stored in the file.
// 6. Close the file after reading.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    string sub;

    // Step 1: Get information from the user
    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cin.ignore(1000, '\n');

    cout << "Enter your favourite subject: ";
    getline(cin, sub);

    // Step 2: Write information to the file
    ofstream infile("student.txt");

    infile << name << endl;
    infile << age << endl;
    infile << sub << endl;

    infile.close();

    // Step 3: Read information from the file
    ifstream outfile("student.txt");

    getline(outfile, name);
    outfile >> age;
    outfile.ignore(1000, '\n');
    getline(outfile, sub);

    outfile.close();

    // Step 4: Display the saved information
    cout << "\nStudent information:\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Favourite subject: " << sub << endl;

    return 0;
}


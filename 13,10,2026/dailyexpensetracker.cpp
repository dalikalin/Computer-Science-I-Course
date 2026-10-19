// Instructions
// Write a C++ program that performs the following tasks:
// 1. Ask the user how many expenses they want to record.
// 2. For each expense, ask for:
//    - The expense name (for example, Food or Transport).
//    - The amount spent.
// 3. Save each expense and its amount in a file named expenses.txt.
// 4. Use append mode so new expenses are added without deleting previous records.
// 5. Close the file after saving all expenses.
// 6. Open the file for reading.
// 7. Read every saved expense and its amount.
// 8. Display each expense and calculate the total of all recorded expenses.
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main () {
    int numofexpense;
    string expensename;
    double amount;
    double total = 0;
    cout << fixed << setprecision(2);

    cout << "How many expenses do you want to record? ";
    cin >> numofexpense;

    ofstream infile("expenses.txt", ios::app); //append mode is a file-opening and data-handling setting that adds new data to the end of an existing file or dataset without deleting or overwriting its current contents.
    for (int i = 0; i< numofexpense; i++) {
        cout << "Enter the expense name: ";
        cin >> expensename;
        cout << "Enter the amount: $ ";
        cin >> amount;
        infile << expensename << " " << amount << endl;
    }

    infile.close();

    ifstream outfile("expenses.txt");

    cout << endl << "Expense records: " << endl;
    
    while (outfile >> expensename >> amount) {
        cout << expensename << ": $" << amount << endl;
        total += amount;
    }
    
    cout << "Total expenses: $" << total << endl;
    outfile.close();
    return 0;
}
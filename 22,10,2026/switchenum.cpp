#include <iostream>
using namespace std;

enum Menu
{
    Play = 1,
    Settings = 2,
    Help = 3
};
int main()
{
    int choice;

    cout << "1. Play" << endl;
    cout << "2. Settings" << endl;
    cout << "3. Help" << endl;

    cout << "Choose an option: ";
    cin >> choice;

    switch (choice)
    {
        case Play:
            cout << "Playing game";
            break;

        case Settings:
            cout << "Opening settings";
            break;

        case Help:
            cout << "Showing help";
            break;

        default:
            cout << "Invalid choice";
    
}
    return 0;
}
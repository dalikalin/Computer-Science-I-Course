#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<int> num = {10, 20, 30, 40, 50};
    cout << "Before popback: ";
    for (int i=0; i < num.size(); i++) {
        cout << num[i] << " ";
    }

    num.pop_back();

    cout << endl << "After popback: ";
    for (int i=0; i < num.size(); i++) {
        cout << num[i] << " ";
    }
    return 0;
}
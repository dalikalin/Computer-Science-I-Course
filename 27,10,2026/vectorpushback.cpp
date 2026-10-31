#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<int> num = {10, 20, 30};

    cout << "Before push back: ";
    for (int i=0; i< num.size(); i++) {
        cout << num[i] << " ";
    }

    num.push_back(40);
    num.push_back(50);

    cout << endl << "After push back: ";
    for (int i=0; i < num.size(); i++) {
        cout << num[i] << " ";
    }
    return 0;
}
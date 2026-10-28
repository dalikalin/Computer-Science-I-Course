#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> num = {10, 20, 30, 40, 50};

    cout << "Before clear: ";
    for (int i=0; i < num.size(); i++) {
        cout << num[i] << " ";
    }

    num.clear();

    cout << endl << "After clear: ";
    for (int i=0; i < num.size(); i++) {
        cout << num[i] << " ";
    }

    return 0;
}
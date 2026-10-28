#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> num = {10, 20, 30, 40, 50};

    for (int n : num) {
        cout << n << " ";
    }
    return 0;
}
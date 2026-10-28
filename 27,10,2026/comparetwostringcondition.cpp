#include <iostream>
#include <cstring>
using namespace std;
int main () {
    char one[] = "hortmes";
    char two[] = "hortmes";

    if (strcmp(one, two) == 0) {
        cout << "Both of them are equal.";
    }
    else {
        cout << "They are not equal.";
    }
    return 0;
}
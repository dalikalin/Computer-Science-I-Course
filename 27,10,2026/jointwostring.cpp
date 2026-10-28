#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char one[20] = "Hello ";
    char two[] = "people";

    strcat(one, two);

    cout << one << endl;
    cout << two;
    return 0;
}
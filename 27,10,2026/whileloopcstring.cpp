#include <iostream>
using namespace std;
int main () {
    char name[] = "dalika";
    int i = 0;

    while (name[i] != '\0') {
        cout << name[i] << endl;
        i++;
    }
    return 0;;
}
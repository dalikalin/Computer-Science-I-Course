#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char word[] = "Hello people";

    cout << strlen(word) << endl; //strlen() counts the characters before '\0'. It does not count the null character.
    cout << sizeof(word);

    return 0;
}
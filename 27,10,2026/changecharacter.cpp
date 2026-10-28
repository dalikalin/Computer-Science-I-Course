//Store "Cat", change the first charater to 'B', and print the word and its length. Cat will be replaced with Bat.
#include <iostream>
using namespace std;
int main() {
    char first[] = "Cat";

    first[0] = 'B';

    cout << first;
    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;
int main () {
    char a[] = "Apple";
    char b[] = "Apple";

    //A return value of 0 means the strings are equal. 
    //A negative value means the first string comes before the second in character ordering.
    //A positive value means it comes after.
    cout << strcmp(a, b);
    
    return 0;
}
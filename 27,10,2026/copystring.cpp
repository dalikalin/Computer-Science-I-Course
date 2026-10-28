#include <iostream>
#include <cstring>
using namespace std;
int main () {
    char computer[] = "file";
    char phone[50];

    strcpy(phone, computer);

    cout << computer << endl;
    cout << phone;
    return 0;
}
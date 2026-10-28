//Using C++ array and a loop to count how many times the letter 'a' appears. for (int i=0; word[i] != '\0'; i++)
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char word[] = "AvadaKedavra";
    int sum = 0;

    for (int i=0; word[i] != '\0'; i++) {
        if (word[i] == 'a' || word[i] == 'A') {
            sum ++;
        }
    }
    
    cout << "The word " << word << " has " << sum << "a.";
    return 0;
}
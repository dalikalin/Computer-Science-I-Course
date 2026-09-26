#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
    srand(time(0));
    int num = rand() % 10+1;
    cout <<"Random number: "<< num << endl;
    return 0;
}
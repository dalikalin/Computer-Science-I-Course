// Add and Display Student Scores
// Write a C++ program that
// 2. Creates an emply integer vector anned scoren
// Takes five scores from the user and adds them using push back.
// 3. Prints all scores using a loop.
// 4. Prints the number of scores using size().
// 5. Calculates and prints their sum.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> scores;
    int score;
    int sum = 0;

    for (int i=0; i<=4; i++) {
        cout << "Enter score number " << i+1 << " : ";
        cin >> score;
        scores.push_back(score);
    }

    cout << endl << "All elements in the vector: ";
    for (int i=0; i < scores.size(); i++) {
        cout << scores[i] << " ";
    }

    cout << endl <<"The number of scores: " << scores.size();

    for (int i=0; i < scores.size(); i++) {
        sum += scores[i];
    }
    cout << endl << "The total: " << sum;
    return 0;
}
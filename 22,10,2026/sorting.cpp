// Write a C++ program that:
// 1. Stores {7, 4, 9, 2} in an array;
// 2. Uses two nested For loops to sort the numbers from smallest to largest.
// 3. Displays the array after each pass.
// 4. Display the final sorted array.
// #include <iostream>
// using namespace std;
// int main () {
//     int num[4] = {7, 4, 9, 2};
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {7, 4, 9, 2};
//     int n = 4;

//     cout << "Initial array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n\n--- Sorting Process ---\n";

//     // Outer loop for each pass
//     for (int i = 0; i < n - 1; i++) {
//         // Inner loop for comparing adjacent elements
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap if they are in the wrong order
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }

//         // Display array after each pass
//         cout << "After Pass " << (i + 1) << ": ";
//         for (int k = 0; k < n; k++) {
//             cout << arr[k] << " ";
//         }
//         cout << endl;
//     }

//     // Display the final sorted array
//     cout << "\nFinal sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    for (int i=1; i<=5; i++) {
        cout << i << endl;
    }

    return 0;
}
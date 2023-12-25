#include<iostream>

using namespace std;

int main() {
    // Number of levels or rows for the pattern
    int n = 5;

    // Loop for each row
    for (int i = 1; i <= n; i++) {
        // Print leading spaces for each row to create the pyramid shape
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print decreasing numbers, but skip the central number as it has been printed in the increasing sequence
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        // Move to the next line after each row is printed
        cout << endl;
    }

    return 0;
}

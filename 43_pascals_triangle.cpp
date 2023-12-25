#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user for the number of rows in Pascal's Triangle
    cout << "Enter the number of rows for Pascal's Triangle: " << endl;
    cin >> n;

    // Loop for each row of the triangle
    for (int i = 0; i < n; i++) {
        int coef = 1;  // This will represent the coefficient at each position in the row

        // Print leading spaces for formatting (to center the triangle)
        for (int j = 1; j < (n - i); j++) {
            cout << "   ";
        }

        // Calculate and print each coefficient in the current row
        for (int k = 0; k <= i; k++) {
            cout << "      " << coef;  // Print the coefficient

            // The formula below calculates the next coefficient in the row
            // Using the formula: coef(i, k) = coef(i, k-1) * (i - k + 1) / k
            cout<<"\ni = "<<i<<" k = "<<k;
            coef = coef * (i - k) / (k + 1);
        }

        // Move to the next line after printing the current row
        cout << endl;
    }

    return 0;
}

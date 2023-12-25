#include <iostream>
using namespace std;

int main() {

    int rows;

    // Prompt the user to enter the number of rows for the pattern
    cout << "Enter number of rows: ";
    cin >> rows;

    // This outer loop defines the number of lines (or rows) in the pattern.
    // Starting from the top (largest pattern) to the bottom (smallest pattern).
    for(int i = rows; i >= 1; --i) {
        
        // This loop prints spaces to shift the pattern to the right with 
        // each subsequent line. As 'i' decreases, the number of spaces increases.
        for(int space = 0; space < rows-i; ++space)
            cout << "  ";

        // This loop prints the left side of the triangle in the pattern. 
        // The number of stars starts at 'i' and goes up to 2*i-1.
        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";

        // This loop prints the right side of the triangle in the pattern.
        // The number of stars decreases by one compared to the left side.
        for(int j = 0; j < i-1; ++j)
            cout << "* ";

        // Move to the next line after completing a row of the pattern.
        cout << endl;
    }

    return 0 ;
}
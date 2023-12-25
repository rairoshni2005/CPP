#include <iostream>

// Use the standard namespace to avoid writing std:: before every standard library item
using namespace std;

int main() {
    // Outer loop: this loop will decide the number of rows the pattern should have
    // For each iteration of 'i', we print a new row
    for(int i = 1; i <= 4; i++) {
        
        // Print increasing numbers
        // This inner loop is responsible for printing numbers from 1 to 'i'
        // E.g., for i=3, it will print 123
        for(int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print decreasing numbers
        // This inner loop starts from 'i-1' and decrements down to 1
        // It prints the numbers in reverse order (after the increasing numbers)
        // E.g., for i=3, after printing 123, this loop will print 21
        for(int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        // After printing each row, move to the next line
        cout << endl;
    }

    return 0;  // Indicate the program ended successfully
}

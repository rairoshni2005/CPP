#include <iostream>

using namespace std;  // This allows us to use cout, endl, etc. without prefixing with std::

int main() {
    // Number of lines for the pattern
    int n = 4;

    // Loop to control the rows
    for (int i = 1; i <= n; i++) {
        // Loop to print decreasing pattern
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        
        // Loop to print increasing pattern from 2 to i
        for (int j = 2; j <= i; j++) {
            cout << j;
        }
        
        // Move to next line after printing the pattern for current row
        cout << endl;
    }

    return 0;
}

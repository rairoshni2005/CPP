// Include the input-output stream header for cin, cout, etc.
#include <iostream>

// Bring all names from the standard namespace into the current scope.
using namespace std;

// Define a recursive function to compute the sum of digits of a given number.
int sumOfDigits(int num) {
    // Base case: If the number is a single-digit number, simply return the number.
    if (num < 10)
        return num;
    
    // Recursive case: Return the last digit of the number (num % 10)
    // and add it to the sum of the remaining digits (num / 10).
    return num % 10 + sumOfDigits(num / 10);
}

// Entry point of the program.
int main() {
    int number;  // Declare a variable to store the user's input.

    // Prompt the user to enter a number.
    cout << "Enter a number: ";
    cin >> number;  // Read the input from the user.

    // Check if the input number is negative.
    if (number < 0) {
        // Inform the user that negative numbers aren't accepted.
        cout << "Please enter a non-negative number." << endl;
        return 1;  // Exit the program with an error status.
    }

    // Display the sum of the digits of the entered number.
    cout << "Sum of digits: " << sumOfDigits(number) << endl;
    
    // Return 0 to indicate successful program termination.
    return 0;
}

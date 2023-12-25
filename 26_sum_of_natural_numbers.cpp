#include <iostream>  // Include the input-output stream header file
using namespace std; // Use the standard namespace to avoid typing std:: before every standard library object

int main() {         // Start of the main function
    int N;           // Declare an integer variable N to store the input number

    // Prompt the user to enter a positive integer
    cout << "Enter a positive integer: ";
    
    // Read the entered integer from the user and store it in N
    cin >> N;

    // Display the result. The sum of the first N natural numbers is calculated using the formula N * (N + 1) / 2
    cout << "The sum of natural numbers up to " << N << " is: " << N * (N + 1) / 2 << endl;

    return 0;        // Return 0 to indicate successful execution
}

#include <iostream>

using namespace std;  // Use the standard namespace to avoid using std:: prefix

// Function to check if a number is divisible by both 5 and 11
bool isDivisibleBy5And11(int number) {
    // Check if number is divisible by 5 and 11
    return (number % 5 == 0) && (number % 11 == 0);
}

int main() {
    int n;

    // Prompt the user for input
    cout << "Enter a number: ";
    cin >> n;

    // Check the number using our function
    if (isDivisibleBy5And11(n)) {
        // If it's divisible by both 5 and 11, print this message
        cout << n << " is divisible by both 5 and 11." << endl;
    } else {
        // If it's not divisible by both 5 and 11, print this message
        cout << n << " is not divisible by both 5 and 11." << endl;
    }

    return 0;  // Return 0 to indicate successful completion
}

#include <iostream>
using namespace std;

// Function to calculate the length of a given string
int stringLength(string str) {
    int length = 0; // Initialize the length counter to 0

    // Range-based for loop to iterate over each character in the string
    for(char c : str) {
        length++; // Increment the length counter for each character
    }
    
    return length; // Return the final length of the string
}

int main() {
    string input; // Declare a string variable to store user input
    
    cout << "Enter a string: ";
    getline(cin, input);  // Use getline to read a full line of text from user input

    // Call the stringLength function to get the length and display it
    cout << "Length of the string is: " << stringLength(input) << endl;

    return 0; // Indicate successful completion
}

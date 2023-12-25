#include <iostream>
using namespace std;

int main() {
    int  digit, product = 1;
    float number ;

    // Get input from user
    cout << "Enter a number: ";
    cin >> number;

    // Check if number is 0
    if (!( number > 0 || number < 0)) {
        cout << "Product of the digits: 0" << endl;
        return 0;  // Exit the program
    }

    // While there are still digits left in the number
    while (number != 0) {
        digit = int(number) % 10;         // Get the last digit of the number
        product *= digit;            // Multiply the product with the digit
        number /= 10;                // Remove the last digit from the number
    }

    cout << "Product of the digits: " << product << endl;

    return 0;
}

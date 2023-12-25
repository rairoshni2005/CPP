#include <iostream>

using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;

    // Input
    cout << "Enter a number: ";
    cin >> n;

    // Continue to find the sum of the digits until a single digit is obtained
    while (n > 9) {
        n = sumOfDigits(n);
    }

    cout << "The single-digit sum is: " << n << endl;

    return 0;
}

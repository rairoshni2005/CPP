#include<iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    double sum = 0.0; // Initialize the sum to 0

    for(int i = 1; i <= N; i++) {
        double factorial = 1.0; // Initialize factorial to 1 for each new term

        // Compute factorial of i using a loop
        for(int j = 1; j <= i; j++) {
            factorial *= j;
        }

        // Add the term to the sum
        sum += (double)i / factorial;
    }

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}

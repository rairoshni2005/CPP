#include <iostream>


using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;  // 0 and 1 are not prime numbers
    }
    if (n <= 3) {
        return true;   // 2 and 3 are prime numbers
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;  // Multiple of 2 or 3 are not prime
    }
    
    
 }

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is a composite number." << endl;
    }

    return 0;
}

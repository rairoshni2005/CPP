#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, sum = 0;
    
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) sum += i;
    }

    cout << "Sum of all prime numbers between 1 and " << n << " is: " << sum << endl;
    return 0;
}


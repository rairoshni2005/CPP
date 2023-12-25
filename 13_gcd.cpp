#include<iostream>

using namespace std;

int gcd(int a, int b) {
    int smallest = min(a, b);
    int largest_gcd = 1;

    for(int i = 2; i <= smallest; i++) {
        if(a % i == 0 && b % i == 0) {
            largest_gcd = i;
        }
    }
    return largest_gcd;
}

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    
    return 0;
}

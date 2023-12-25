#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;  
    cout << "Enter the value of n: ";
    cin >> n;
      for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    cout << "Sum of all even numbers between 1 and " << n << " is: " << sum << endl;

    return 0;
}

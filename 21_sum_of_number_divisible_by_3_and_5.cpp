#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    cout << "The sum of numbers between 1 and " << n << " that are divisible by either 3 or 5 is: " << sum << endl;

    return 0;
}

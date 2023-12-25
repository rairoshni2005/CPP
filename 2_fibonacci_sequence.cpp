#include<iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Sequence: ";

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << a << " ";
            continue;
        }
        if (i == 2) {
            cout << b << " ";
            continue;
        }
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        
        cout << nextTerm << " ";
    }

    return 0;
}

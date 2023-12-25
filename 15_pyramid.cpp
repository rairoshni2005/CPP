#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the height of the pyramid: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Loop for spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Loop for left side of pyramid
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        // Loop for right side of pyramid
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

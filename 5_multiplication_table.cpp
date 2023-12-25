#include <iostream>
using namespace std;

int main() {
    int number,choice,multiples;
    bool playagain = true;

    cout << "Welcome to the Multiplication Table Generator!\n";
    do{
        cout << "Enter a number : ";
        cin >> number;

        cout << "How many multiples do you want? ";
        cin >> multiples;

        cout << endl<<"Multiplication table of " << number << ":" << endl;

        for (int i = 1; i <= multiples; i++) {
            cout << number << " x " << i << " = " << (number * i) << endl;
        }
    return 0;
}
}

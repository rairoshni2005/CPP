#include <iostream>
using namespace std;

class ATM {
private:
    double balance;

public:
    ATM() : balance(1000.0) {}

    void checkBalance() {
        cout << "Your current balance is: $" << balance << endl;
    }

    void deposit() {
        double amount;
        cout << "Enter the amount to deposit: $";
        cin >> amount;
        balance += amount;
    }

    void withdraw() {
        double amount;
        cout << "Enter the amount to withdraw: $";
        cin >> amount;
        balance -= amount;  // Ideally you would want to check for overdraft but that's omitted for brevity
    }
};

int main() {
    ATM atm;
    int choice;

    do {
        cout << "\n------ ATM Menu ------" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            atm.checkBalance();
            break;
        case 2:
            atm.deposit();
            break;
        case 3:
            atm.withdraw();
            break;
        }
    } while (choice != 4);

    return 0;
}

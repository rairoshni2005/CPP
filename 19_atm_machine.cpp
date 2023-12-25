#include <iostream>
using namespace std;

// Class definition for the ATM machine
class ATM {
private:
    // Private member to hold the user's balance
    double balance;

public:
    // Constructor initializes the balance with a default value of 1000
    ATM() : balance(1000.0) {}

    // Member function to display the current balance
    void checkBalance() {
        cout << "Your current balance is: $" << balance << endl;
    }

    // Member function to handle depositing money
    void deposit() {
        double amount;
        cout << "Enter the amount to deposit: $";
        cin >> amount;

        // Check if the deposit amount is valid
        if (amount < 0) {
            cout << "Invalid amount." << endl;
            return;
        }

        // Update the balance
        balance += amount;
        cout << "Successfully deposited $" << amount << "." << endl;
    }

    // Member function to handle withdrawing money
    void withdraw() {
        double amount;
        cout << "Enter the amount to withdraw: $";
        cin >> amount;

        // Check if the withdrawal amount is valid and if there are sufficient funds
        if (amount < 0 || amount > balance) {
            cout << "Invalid amount or insufficient funds." << endl;
            return;
        }

        // Update the balance
        balance -= amount;
        cout << "Successfully withdrew $" << amount << "." << endl;
    }
};

// Main function
int main() {
    // Create an instance of the ATM class
    ATM atm;
    int choice;

    // Main loop for the ATM menu
    do {
        // Display the menu to the user
        cout << "\n------ ATM Menu ------" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Use switch statement to handle user's choice
        switch (choice) {
        case 1:
            // Call the function to check balance
            atm.checkBalance();
            break;
        case 2:
            // Call the function to deposit money
            atm.deposit();
            break;
        case 3:
            // Call the function to withdraw money
            atm.withdraw();
            break;
        case 4:
            // Exit the program
            cout << "Thank you for using our ATM. Goodbye!" << endl;
            break;
        default:
            // Handle invalid choices
            cout << "Invalid choice. Please choose a number between 1 and 4." << endl;
            break;
        }
    } while (choice != 4);  // Loop until user chooses to exit

    return 0;
}

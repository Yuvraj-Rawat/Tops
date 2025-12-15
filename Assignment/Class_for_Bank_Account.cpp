#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;   // Private data member (Encapsulation)

public:
    // Constructor to initialize balance
    BankAccount(float initialBalance = 0) {
        if (initialBalance < 0) {
            balance = 0;
            cout << "Initial balance cannot be negative. Setting to 0.\n";
        } else {
            balance = initialBalance;
        }
    }

    // Function to deposit money
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    // Function to withdraw money
    void withdraw(float amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!\n";
        }
        else if (amount > balance) {
            cout << "Insufficient balance!\n";
        }
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    // Function to display balance
    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(1000);  // Create object with initial balance

    account.showBalance();
    
    account.deposit(500);
    account.withdraw(300);

    account.showBalance();

    return 0;
}


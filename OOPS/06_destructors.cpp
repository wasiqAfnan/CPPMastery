#include <iostream>
using namespace std;

// Simulate a BankAccount class
class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor to open the account with an initial deposit
    BankAccount(string holder, double initialDeposit) {
        accountHolder = holder;
        balance = initialDeposit;
        cout << "Bank account for " << accountHolder << " opened with balance: $" << balance << endl;
    }

    // Destructor to close the account
    ~BankAccount() {
        cout << "Bank account for " << accountHolder << " is now closed. Final balance: $" << balance << endl;
    }

    // Method to deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << " to " << accountHolder << "'s account. New balance: $" << balance << endl;
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds for withdrawal!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew $" << amount << " from " << accountHolder << "'s account. New balance: $" << balance << endl;
        }
    }
};

int main() {
    cout << "Entering the main function..." << endl;

    {
        // Create a BankAccount object within this block
        BankAccount account1("Wasiq Afnan", 500.0);  // Constructor called, account opened

        // Simulating some account operations
        account1.deposit(200.0);  // Deposit money
        account1.withdraw(100.0); // Withdraw money
    } // account1 goes out of scope here, destructor called, account closed

    cout << "Back in the main function..." << endl;

    return 0;
}


/*  Output  */
/*

Entering the main function...
Bank account for Wasiq Afnan opened with balance: $500
Deposited $200 to Wasiq Afnan's account. New balance: $700
Withdrew $100 from Wasiq Afnan's account. New balance: $600
Bank account for Wasiq Afnan is now closed. Final balance: $600
Back in the main function...

*/
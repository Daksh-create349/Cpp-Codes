

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string n, int accNo, double b) {
        name = n;
        accountNumber = accNo;

        if (b >= 0)
            balance = b;
        else {
            balance = 0;
            cout << "Invalid initial balance. Set to 0.\n";
        }
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient balance.\n";
        }
    }

    // Display account details
    void display() {
        cout << "\nAccount Holder Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Account Closed for " << name << endl;
    }
};

int main() {
    BankAccount acc("Daksh", 101, 5000);

    acc.display();

    acc.deposit(1500);
    acc.display();

    acc.withdraw(2000);
    acc.display();

    return 0;
}
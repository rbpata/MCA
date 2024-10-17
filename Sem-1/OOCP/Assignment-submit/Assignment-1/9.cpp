#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    // Data members
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:

    BankAccount(string name, int accNo, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNo;
        accountType = accType;
        balance = initialBalance;
        cout << "Account created successfully!" << endl;
    }


    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully. New balance: " << balance << endl;
        } else {
            cout << "Invalid amount. Please enter a positive value." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Amount withdrawn successfully.\n New balance: " << balance << endl;
            } else {
                cout << "\nInsufficient balance!" << endl;
            }
        } else {
            cout << "Invalid amount. Please enter a positive value." << endl;
        }
    }

    void displayAccountInfo() const {
        cout << "Account Holder: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Current Balance: " << balance << endl;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account("Ram",12345,"Saving",12000);

    int choice;
    double amount;

    do {
        cout << "\n------ Bank Menu ------" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice :  ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.displayAccountInfo();
                break;

            case 4:
                cout << "Thank you for using our banking services!" << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a valid option " << endl;
        }
    } while (choice != 4);

    return 0;
}

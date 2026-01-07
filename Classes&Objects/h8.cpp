#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount() {
        accountNumber = 0;
        balance = 0;
    }

    BankAccount(int accNumber) {
        accountNumber = accNumber;
        balance = 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    void displayBalance() {
        cout << "Account " << accountNumber << " balance: " << balance << endl;
    }
};

class Bank {
private:
    BankAccount* accounts;
    int numAccounts;

public:
    Bank(int num) {
        numAccounts = num;
        accounts = new BankAccount[numAccounts];
        for (int i = 0; i < numAccounts; ++i) {
            accounts[i] = BankAccount(i + 1);
        }
    }

    ~Bank() {
        delete[] accounts;
        accounts = nullptr;
    }

    void performTransactions() {
        if (numAccounts >= 3) {
            accounts[0].deposit(1000);
            accounts[1].deposit(500);
            accounts[2].deposit(200);
            accounts[2].withdraw(50);
        }
    }

    void displayAllBalances() {
        for (int i = 0; i < numAccounts; ++i) {
            accounts[i].displayBalance();
        }
    }
};

int main() {
    system("cls");

    Bank bank(3);

    bank.performTransactions();
    bank.displayAllBalances();

    return 0;
}
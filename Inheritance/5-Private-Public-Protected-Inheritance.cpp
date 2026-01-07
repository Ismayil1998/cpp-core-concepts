#include <iostream>
#include <string>
using namespace std;


class Account{
   protected:
   int accountNumber;
   string accountHolder;

   protected:
   double balance;

   public:
   Account(){
    accountNumber=0;
    accountHolder="None";
    balance=0.0;
   }

   Account(int accountNumberP, string accountHolderP, double balanceP ){
    accountNumber=accountNumberP;
    accountHolder=accountHolderP;
    balance=balanceP;
   }

   void deposit(double amount){
    if (amount>0)
    {
        balance+=amount;
        cout<<"Deposit: "<<amount<<" Balance: "<<balance<<endl;
    }else
    {
        cout<<"Invalid deposit "<<endl;
    }
   }

   void withdraw(double amount){
     if (amount>0&&balance>=amount)
     {
        balance-=amount;
        cout << "Withdraw: " << amount << " Balance: " << balance << endl;
        
     }else
     {
        cout<<"Invalid withdraw"<<endl;
     }
   }

   double getBalance()const{
    return balance;
   }

   void displayAccount() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }

};

 class SavingsAccount: public Account{
      public:
      SavingsAccount(int accountNumberP, string accountHolderP, double balanceP):Account(accountNumberP, accountHolderP,balanceP){};

      void applyInterest(double rate){
         balance*=(1 + rate);
         cout<<"Interest Applied: "<<"Balance: "<<balance<<endl;
      }
};

class CheckingAccount: protected Account{
    public:
      CheckingAccount(int accountNumberP, string accountHolderP, double balanceP):Account(accountNumberP, accountHolderP,balanceP){};

      void applyMonthlyFee(double fee){
        balance-=fee;
        cout << "Monthly Fee Applied: " <<"Balance: "<< balance << endl;
      }
};

class CreditCardAccount: private Account{
    public:
     CreditCardAccount(int accountNumberP, string accountHolderP, double balanceP):Account(accountNumberP, accountHolderP,balanceP){};

      void makePurchase(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Purchase Made: Amount: " << amount << " Balance: " << balance << endl;
        } else {
            cout << "Insufficient Funds" << endl;
        }
    }
};


int main() {
    system("cls");

    SavingsAccount savings(1001, "John Doe", 1000.0);
    CheckingAccount checking(2001, "Jane Smith", 1500.0);
    CreditCardAccount creditCard(3001, "Alice Johnson", 500.0);

    savings.deposit(500);
    savings.applyInterest(0.05);
    savings.withdraw(200);
    
    checking.applyMonthlyFee(10);

    creditCard.makePurchase(200);
    creditCard.makePurchase(400);

}

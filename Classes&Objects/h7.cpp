#include <iostream>
using namespace std;

class BankAccount {
    private:
    int accountNumber;
    double balance=0;
    static int count;

    public:
    BankAccount(int accountNumberP ){
        accountNumber=accountNumberP;
        count++;
    }
    ~BankAccount(){
        count--;
        cout << "Account " << accountNumber << " closed." << endl; 
    }

   

    void deposit(double amount){
        if (amount>0)
        {
            balance+=amount;
        }else
        {
            cout<<"Amount zero or negative"<<endl;
        }
    }
    void setBankWithDraw(double amount){
        if (amount>0&&amount<=balance)
        {
            balance-=amount;
        }else
        {
            cout<<"Invalid amount or insufficient balance"<<endl;
        }
    }

    double getBalance(){
        return balance;
    }

};
int BankAccount::count=0;


int main() {
      system("cls");

    BankAccount account1(12345); 
    BankAccount account2(67890); 

    account1.deposit(1000);
    account2.deposit(500);

    cout << "Balance of account 1: " << account1.getBalance() << endl;
    cout << "Balance of account 2: " << account2.getBalance() << endl;

    return 0;
}
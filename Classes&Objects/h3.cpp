#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
        int accountNumber;
        string holderName;
        double balance;

    public:
        BankAccount( const int accountNumber, const string &holderName, double initialBalance) {
            this->accountNumber=accountNumber;
            this->holderName=holderName;
            balance=initialBalance;
        }

        void setDeposit(double amount){
            if (amount>0)
            {
                balance+=amount;
            }
            
        }

        void setWithdraw(double amount){
             if (balance>0&&amount<=balance)
             {
                balance-=amount;
             }   
        }

        void checkBalance()const{
            cout<<"Account Number: "<<accountNumber<<endl;
            cout<<"Holder Name: "<<holderName<<endl;
            cout<<"Current Balance: "<<balance<<endl;
        }

        
};



int main() {
    system("cls");
    BankAccount b1(12345,"James",0.0);
    b1.checkBalance();
    cout<<endl;
    b1.setDeposit(500.0);
    b1.setWithdraw(200.0);
    b1.checkBalance();
     
   
}


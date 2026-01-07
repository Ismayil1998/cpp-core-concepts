#include <iostream>
#include <string>
using namespace std;


class Account {
    protected:
    int accountNumber;
    double balance;

    public:

        Account():accountNumber(0), balance(0.0){};

        Account(int accountNumberP, double balanceP):accountNumber(accountNumberP), balance(balanceP){};

        virtual ~Account(){};

        virtual void deposit(double amount) {};
        virtual void withdraw(double amount){};
        virtual void displayBalance(){};
        

};


class SavingsAccount : public Account {
    private:
    double rate;

    public:
        SavingsAccount(int accountNumberP, double balanceP, double rateP):Account(accountNumberP, balanceP), rate(rateP){};
         
         void deposit(double amount)override{
            if (amount>0)
            {
                balance+=amount;
            }else
            {
                cout<<"The amount is less than zero. Erorr message!.."<<endl;
            }
            
         }

         void withdraw(double amount)override{
             if (amount<=balance&&amount>0)
             {
                balance-=amount;
             }else
             {
                cout<<"The withdrawal amount exceeds the balance: Error message!.."<<endl;
             }

         }


            void displayBalance()override{
            cout<<"Savings account:  "<<accountNumber<<endl;   
            cout<<"Current Balance: "<<balance<<endl;
            cout<<"Interest rate: "<<rate<<endl;
            cout<<endl;
            cout<<endl;
         }

};


class CheckingAccount : public Account {
    public:
        CheckingAccount(int accountNumberP, double balanceP):Account(accountNumberP,balanceP ){};

          void deposit(double amount)override{
            if (amount>0)
            {
                balance+=amount;
            }else
            {
                cout<<"The amount is less than zero. Erorr message!.."<<endl;
            }
            
         }

         void withdraw(double amount)override{
             if (amount<=balance&&amount>0)
             {
                balance-=amount;
             }else
             {
                cout<<"the withdrawal amount exceeds the balance: Error message!.."<<endl;
                
             }

         }


           void displayBalance()override{
            cout<<"Checking account: "<<accountNumber<<endl;
            cout<<"Current Balance: "<<balance<<endl;
            cout<<endl;
            cout<<endl;
            
         }

        
};


int main() {
    system("cls");
    
    Account* savings = new SavingsAccount(1001, 1000.0, 3.0);
    Account* checking = new CheckingAccount(2001, 2000.0);

    savings->displayBalance();
    checking->displayBalance();
    
    savings->deposit(500);
    checking->deposit(300);

    savings->displayBalance();
    checking->displayBalance();

    savings->withdraw(100);
    checking->withdraw(200);

    savings->displayBalance();
    checking->displayBalance();

    delete savings;
    delete checking;

    return 0;
}

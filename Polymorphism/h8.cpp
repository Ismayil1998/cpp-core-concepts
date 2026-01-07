#include <iostream>
#include <string>
using namespace std;


double trackStockPrice(string symbol, double currentPrice) {
     static double highestPrice = 0;   
    if (currentPrice > highestPrice) {
        highestPrice = currentPrice;  
    }
    return highestPrice;
}


class BankAccount {
private:
    int accountNumber;       
    double balance;
    static int nextAccountNumber;  

public:
    static int totalAccounts;   

    BankAccount() {
        accountNumber = nextAccountNumber++;
        balance = 0.0;
        totalAccounts++;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
        } else {
            cout << "Invalid withdrawal" << endl;
        }
    }

    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int BankAccount::nextAccountNumber = 1001;
int BankAccount::totalAccounts = 0;


class OnlyOneInstance {
private:
    static OnlyOneInstance* instance;  
    OnlyOneInstance() {}                

public:
    OnlyOneInstance(const OnlyOneInstance&) = delete;
    void operator=(const OnlyOneInstance&) = delete;

    static OnlyOneInstance* getInstance() {
        if (instance == nullptr) {
            instance = new OnlyOneInstance();
        }
        return instance;
    }

    void showMessage() {
        cout << "This is the only instance of the class" << endl;
    }
};

OnlyOneInstance* OnlyOneInstance::instance = nullptr;


static int primes[100] = {0}; 
static int primeCount = 0; 

bool isPrime(int n) {
    if (n < 2){
       return false;
    } 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0){
          return false;
        } 
    }
    return true;
}
void generateAndCachePrimes(int limit) {
     primeCount = 0;
    for (int i = 2; i <= limit && primeCount < 100; i++) {
        if (isPrime(i)){
          primes[primeCount++] = i;
        } 
    }


}



int main() {
     system("cls");
    double price1 = trackStockPrice("AAPL", 150.25);
    cout << "Highest AAPL Stock Price: $" << price1 << endl;

    double price2 = trackStockPrice("GOOGL", 2700.50);
    cout << "Highest GOOGL Stock Price: $" << price2 << endl;

    double price3 = trackStockPrice("AAPL", 155.75);
    cout << "Highest AAPL Stock Price: $" << price3 << endl;

    double price4 = trackStockPrice("TSLA", 800.00);
    cout << "Highest TSLA Stock Price: $" << price4 << endl;
    cout<<endl;
    cout<<endl;


    
    BankAccount account1;
    account1.deposit(1000);
    account1.withdraw(500);
    account1.displayAccountDetails();
    cout<<endl;

    BankAccount account2;
    account2.deposit(1500);
    account2.displayAccountDetails();

    cout << "Total Accounts Created: " << BankAccount::totalAccounts << endl;
    cout<<endl;


      OnlyOneInstance* obj1 = OnlyOneInstance::getInstance();
      obj1->showMessage();

    OnlyOneInstance* obj2 = OnlyOneInstance::getInstance();

    if (obj1 == obj2) {
        cout << "obj1 and obj2 are the same instance" << endl;
    } else {
        cout << "Different instances created error.." << endl;
    }



   
     int limit;
    cout << "Generate primes up to: ";
    cin >> limit;

    generateAndCachePrimes(limit);

    cout << "Cached primes: ";
    for (int i = 0; i < primeCount; i++){
       cout << primes[i] << " ";
    } 
    cout << endl;

    int query;
    cout << "Check if number is prime: ";
    cin >> query;

    bool found = false;
    for (int i = 0; i < primeCount; i++) {
        if (primes[i] == query) {
            found = true;
            break;
        }
    }

    if (found){
      cout << query << " is prime." << endl;
    }else{
        cout << query << " is NOT prime." << endl;
    }
    
   


}
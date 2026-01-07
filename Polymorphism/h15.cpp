#include <iostream>
#include <string>
using namespace std;

class PaymentMethod {
    public:
       virtual void processPayment(double amount)=0;

        void logpaymentAttempt(int attempt, double amount){
            cout<<"Payment attempt for: "<<attempt<<" Payment amount: "<<amount<<endl;
        }

        virtual ~PaymentMethod(){}
};


class CreditCardPayment : public PaymentMethod {
    public:
        void processPayment(double amount)override{
            cout<<"The payment is being processed using a Credit Card: "<<amount<<endl;
        }
};

class PayPalPayment : public PaymentMethod {
    public:
        // TODO: Implement the processPayment function
          void processPayment(double amount)override{
            cout<<"The payment is being processed using a PayPal Card: "<<amount<<endl;
        }
};


int main() {
      system("cls");
    PaymentMethod *credit=new CreditCardPayment();
    PaymentMethod* paypal= new PayPalPayment();

    credit->logpaymentAttempt(1, 100.6);
    credit->processPayment(100.6);
    cout<<endl;
    paypal->logpaymentAttempt(1, 600.8);
    paypal->processPayment(600.8);

    delete credit;
    delete paypal;

    return 0;
}

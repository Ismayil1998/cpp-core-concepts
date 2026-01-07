#include <iostream>
using namespace std;

class Authenticator {
    public:
        virtual bool authenticate(const string& username, const string& password) const = 0;
};


class BasicAuthenticator final : public Authenticator {
    public:
        BasicAuthenticator(const string& validUsername, const string& validPassword)
            : validUsername_(validUsername), validPassword_(validPassword) {}

        bool authenticate(const string& username, const string& password) const override {
            return username == validUsername_ && password == validPassword_;
        }

    private:
        string validUsername_;
        string validPassword_;
};


    class CustomAuthenticator final : public Authenticator{
    public:
        CustomAuthenticator(const string& validUsername, const string& validPassword)
            : validUsername(validUsername), validPassword(validPassword) {}

              bool authenticate(const string& username, const string& password) const override {
                return username == validUsername && password == validPassword;
              }

        private:
        string validUsername;
        string validPassword;

    };


int main() {
     system("cls");
    BasicAuthenticator basicAuth("admin", "admin123");

    if (basicAuth.authenticate("admin", "admin123")) {
        cout << "Authentication successful!" << endl;
    } else {
        cout << "Authentication failed!" << endl;
    }

      cout<<"-----------------"<<endl;
   
        CustomAuthenticator customAuth("user1", "pass1");

        if (customAuth.authenticate("user1", "pass1")) {
            cout << "Authentication successful!" << endl;
        } else {
            cout << "Authentication failed!" << endl;
        }
    
    return 0;
}

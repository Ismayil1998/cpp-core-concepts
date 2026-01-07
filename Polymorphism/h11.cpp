#include <iostream>
#include <string>
using namespace std;


class User{
    public:
    string name;
    User(string nameP):name(nameP){};

     virtual void login() {
        cout << name << " logged in." << endl;
    }

    virtual void logout() {
        cout << name << " logged out." << endl;
    }

   virtual void viewProfile(){
    cout << "Viewing the profile of manager " << name << "." << endl;
   }

      virtual void performAction() {
        cout << name << " is performing a generic action." << endl;
       }

    virtual ~User() {};

};

class SiteUser: public User{
   public:

   SiteUser(string nameP) : User(nameP) {}


   virtual void postComment(){
    cout<<name<<" Comment posted by.."<<endl;
   }

   void performAction() override {
        postComment();
    }
};

class AdminUser : public SiteUser {
public:
    AdminUser(string nameP) : SiteUser(nameP) {}

    void performAction() override {
        cout << name << " is performing an admin action." << endl;
    }
};


class ModeratorUser:public AdminUser{
    public:
    ModeratorUser(string nameP): AdminUser(nameP){};
    virtual void moderateContent(){
        cout<<name<<" content moderated by."<<endl;
    }

     void performAction() override {
        moderateContent();
    }

    void viewProfile() override {
        cout << "Viewing the profile of moderator " << name << "." << endl;
    }
};

class ManagerUser: public AdminUser{
    public:
    ManagerUser(string nameP): AdminUser(nameP){};
    virtual void manageUsers(){
       cout<<name<<" users managed by"<<endl;
    }

      void performAction() override {
        manageUsers();
       }

    void viewProfile() override {
        cout << "Viewing the profile of manager " << name << "." << endl;
     }
   
}; 

int main() {
     system("cls");
    User* user1 = new ModeratorUser("ModUser123");
    User* user2 = new ManagerUser("ManagerUser456");

    user1->login();
    user1->performAction();
    user1->viewProfile();
    user1->logout();
cout<<"___________________________"<<endl;

    user2->login();
    user2->performAction();
    user2->viewProfile();
    user2->logout();
    
    ModeratorUser* modUser = dynamic_cast<ModeratorUser*>(user1);
    if (modUser) {
        modUser->moderateContent();
    }

    ManagerUser* managerUser = dynamic_cast<ManagerUser*>(user2);
    if (managerUser) {
        managerUser->manageUsers();
    }

    delete user1;
    delete user2;
}



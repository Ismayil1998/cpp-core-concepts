#include <iostream>
#include <string>
using namespace std;

#include <vector>

class ProductManager{
  public:
  virtual void displayProductDetails(int productId)=0;
  virtual ~ProductManager() {};
};


 class AbstractCart:protected ProductManager{
    protected:
     vector<int>cart;

     public:
     virtual void addToCart(int id)=0;
     virtual void removeFromCart(int id)=0;
     virtual void displayCart()=0;
     virtual void checkout()=0;
     virtual ~AbstractCart(){};
 };


class OnlineStore:public AbstractCart{
    public:
    void displayProductDetails(int productId)override{
    cout<<"Online Stroe: "<<productId<<endl;
   } 

   void addToCart(int id)override{
      cart.push_back(id);
   }

   void removeFromCart(int id)override{
     for (int i = 0; i < cart.size(); i++)
     {
        if (cart[i]==id)
        {
            cart.erase(cart.begin()+i);
            break;
        }
     }
   }

   void displayCart(){
    for ( auto productId:cart)
    {
        cout<<productId<<" "<<endl;
        
    }
   }

   void checkout()override{
    cout<<"Check out: "<<cart.size()<<endl;
   } 
};

class MobileApp:public AbstractCart{
    public:
      void displayProductDetails(int productId)override{
    cout<<"Mobile App: "<<productId<<endl;
   } 

   void addToCart(int id)override{
      cart.push_back(id);
   }

   void removeFromCart(int id)override{
     for (int i = 0; i < cart.size(); i++)
     {
        if (cart[i]==id)
        {
            cart.erase(cart.begin()+i);
            break;
        }
     }
   }

   void displayCart(){
    for ( auto productId:cart)
    {
        cout<<productId<<" "<<endl;
        
    }
   }

   void checkout()override{
    cout<<"Check out: "<<cart.size()<<endl;
   } 

};



int main() {
    system("cls");
    OnlineStore onlineStore;
    onlineStore.displayProductDetails(101);
    onlineStore.addToCart(101);
    onlineStore.addToCart(102);
    onlineStore.addToCart(103);
    onlineStore.removeFromCart(101);
    onlineStore.removeFromCart(102);
    onlineStore.displayCart();
    onlineStore.checkout();
    cout<<endl;
    MobileApp mobileApp;
    mobileApp.displayProductDetails(201);
    mobileApp.addToCart(201);
    mobileApp.addToCart(202);
    mobileApp.addToCart(203);
    mobileApp.removeFromCart(201);
    mobileApp.displayCart();
    mobileApp.checkout();

}
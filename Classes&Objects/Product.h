#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class Product{
    private:
    int productID;
    string productName;
    double productPrice;
    
    public:
    Product(int id, const string &name, double price);

    int getProductID()const;
    string getProductName()const;
    double getProductPrice()const;
};

Product::Product(int id, const string &name, double price){
   productID=id;
   productName=name;
   productPrice=price;
}

int Product::getProductID()const{
    return productID;
}

string Product::getProductName()const{
    return productName;
}

double Product::getProductPrice()const{
    return productPrice;
}

#endif
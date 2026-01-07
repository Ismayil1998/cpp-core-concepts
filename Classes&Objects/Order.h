#ifndef ORDER_H
#define ORDER_H
#include <string>
#include "Product.h"
#include <vector>
 
class Order{
    private:
    int orderID;
    string customerName;
    vector<Product>orderProducts;

    public:
    Order(int id, const string &name);

    int getOrderID()const;
    string getCustomerName()const;
    vector<Product>getOrderedProducts()const;

    void addProduct(const Product &product);
    double calculateOrderTotal()const;

};

Order::Order(int id, const string &name){
    orderID=id;
    customerName=name;
}

int Order::getOrderID()const{
    return orderID;
}

string Order::getCustomerName()const{
    return customerName;
}

vector<Product>Order::getOrderedProducts()const{
    return orderProducts;
}

void Order::addProduct(const Product &product){
    orderProducts.push_back(product);
}

double Order::calculateOrderTotal()const{
    double total=0.0;

    for (const Product &product:orderProducts)
    {
        total+=product.getProductPrice();
    }
    return total;
    
}

#endif
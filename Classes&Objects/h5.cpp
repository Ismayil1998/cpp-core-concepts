#include <iostream>
#include "Product.h"
#include "Order.h"
using namespace std;

int main() {

    system("cls");

    Product p1(1, "Product 1", 10.0);
    Product p2(2, "Product 2", 20.0);
    Product p3(3, "Product 3", 30.0);

    Order order(1, "John Doe");

    order.addProduct(p1);
    order.addProduct(p2);
    order.addProduct(p3);

    double total = order.calculateOrderTotal();

    cout << "Order ID: " << order.getOrderID() << endl;
    cout << "Customer Name: " << order.getCustomerName() << endl;
    cout << "Ordered Products:" << endl;

    for (const Product& product : order.getOrderedProducts()) {
        cout << " - " << product.getProductName() << endl;
    }
    
    cout << "Total: $" << total << endl;

    return 0;
}
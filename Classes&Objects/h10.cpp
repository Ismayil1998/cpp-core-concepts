#include <iostream>
using namespace std;

class MathOperations {
private:
    double total;

public:
    MathOperations(double initial) {
        total = initial;
    }

    MathOperations& add(int val) {
        total += val;
        return *this;
    }

    MathOperations& subtract(int val) {
        total -= val;
        return *this;
    }

    MathOperations& multiply(int val) {
        total *= val;
        return *this;
    }

    MathOperations& divide(int val) {
        if (val != 0) {
            total /= val;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
        return *this;
    }

    double getResult() {
        return total;
    }
};




int main() {
     system("cls");
    MathOperations math(10);
    
    math.add(5).subtract(2).multiply(3).divide(4);
    
    cout << "Final result: " << math.getResult() << endl;
    
    return 0;
}
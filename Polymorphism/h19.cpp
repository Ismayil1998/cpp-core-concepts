#include <iostream>
#include <string>
using namespace std;


class MathOperations {
    public:
        int add(int a, int b) {
            return a + b;
        }

        double add(double a, double b) {
            return a + b;
        }
};

class Complex {
    public:
        double real;
        double imag;

        Complex operator+(const Complex& other) const {
            Complex result;
            result.real = real + other.real;
            result.imag = imag + other.imag;
            return result;
        }
};

class Shape {
    public:
        virtual void draw() const {
            cout << "Drawing a Shape" << endl;
        }
};

class Circle : public Shape {
    public:
        void draw() const override {
            cout << "Drawing a Circle" << endl;
        }
};

class Square : public Shape {
    public:
        void draw() const override {
            cout << "Drawing a Square" << endl;
        }
};


int main() {

    MathOperations math;

    cout << "Sum (int): " << math.add(3, 4) << endl;


    cout << "Sum (double): " << math.add(3.5, 4.5) << endl;

    Complex c1, c2, result;
    c1.real = 1.0;
    c1.imag = 2.0;
    c2.real = 2.5;
    c2.imag = 1.5;

    
    result = c1 + c2;
    cout << "Sum: " << result.real << " + " << result.imag << "i" << endl;
   
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    
    shape1->draw();  

   
    shape2->draw();  

    delete shape1;
    delete shape2;

}

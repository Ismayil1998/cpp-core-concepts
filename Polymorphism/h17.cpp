#include <iostream>
#include <string>
using namespace std;

class Shape{
    public:
    virtual void resize(double size)=0;
    virtual ~Shape() {}
};

class DrawableShape: public Shape{
    public:
    virtual double calculateArea()=0;

    virtual void draw()=0;

    virtual ~DrawableShape(){} 
};



class Circle:public Shape, public DrawableShape{
    private:
    double radius;

    public:
    Circle(double radisuP):radius(radisuP){};


    void draw()override{
        cout<<"Circle draw.."<<endl;
    }

    void resize(double factor)override{
        radius=factor;
    }
  
    double calculateArea()override{
        return 3.14*radius*radius;
    }
     

};

class Square:public Shape, public DrawableShape{
    private:
    double side;

    public:
    Square(double sideP):side(sideP){};

    void draw()override{
        cout<<"Square draw.."<<endl;
    }

    void resize(double factor)override{
        side=factor;
        
    }
    
    double calculateArea()override{
        return side*side;
    }

};




int main() {
     system("cls");
    Circle circle(5.0);
    Square square(4.0);

    circle.draw();
    cout << "Circle Area: " << circle.calculateArea() << endl;
    circle.resize(1.5);
    cout << "Resized Circle Area: " << circle.calculateArea() << endl;

     cout<<endl;

    square.draw();
    cout << "Square Area: " << square.calculateArea() << endl;
    square.resize(2.0);
    cout << "Resized Square Area: " << square.calculateArea() << endl;

    return 0;
}


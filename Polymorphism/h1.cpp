#include <iostream>
#include <string>
using namespace std;

class Shape{
    protected:
    string name;

    public:
    Shape(){
        name="None";
    }
    
    Shape(string namep){
        name=namep;
    }

    virtual void draw(){
        cout<<"Drawing a "<<name;
    }

};

class Circle: public Shape{
    private:
    double radius;

    public:
    Circle(){
        radius=0.0;
    }

    Circle(string namep, double radiusp):Shape(namep),radius(radiusp){};


    void draw()override{
        Shape::draw();
        cout<<" with radius "<<radius<<endl;
        cout<<endl;
    }

};

class Rectangle: public Shape{
    private:
    double length;
    double  width;

    public:
    Rectangle(){
        length=0.0;
        width=0.0;
    }

    Rectangle(string namep, double lenghtp, double widthp):Shape(namep),length(lenghtp),width(widthp){};

    void draw()override{
        Shape::draw();
        cout<<" with length "<<length<<" and  width "<<width<<endl;
        cout<<endl;
    }
};

class Triangle: public Shape{
    private:
    double length;
    double  width;

    public:
    Triangle(){
        length=0.0;
        width=0.0;
    }

    Triangle(string namep, double lenghtp, double widthp):Shape(namep),length(lenghtp),width(widthp){};

    void draw()override{
        Shape::draw();
        cout<<" with length "<<length<<" and width "<<width<<endl;
        cout<<endl;
    }
};

class Square: public Shape{
    private:
    double side;

    public:
    Square(){
        side=0.0;
    }

    Square(string namep, double sidep):Shape(namep),side(sidep){};


    void draw()override{
        Shape::draw();
        cout<<" with side "<<side<<endl;
        cout<<endl;
    }

};



int main() {
   
    system("cls");

    Circle circle("Circle", 5.0);
    Rectangle rectangle("Rectangle", 6.0, 4.0);
    Triangle triangle("Triangle", 4.0, 3.0);
    Square square("Square", 5.5);

    Shape* shapes[] = { &circle, &rectangle, &triangle, &square };

    for (int i = 0; i < 4; i++) {
        shapes[i]->draw();
    }

    return 0;
}

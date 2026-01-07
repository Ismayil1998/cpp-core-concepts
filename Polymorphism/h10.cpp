#include <iostream>
using namespace std;


class Shape {
    public:
        static void CompareAreas(double area1, double area2){
            if (area1==area2)
            {
                cout<<"Equal"<<endl;
            }else
            {
                cout<<"Not Equal"<<endl;
            }
            
        }
};

class Circle : public Shape {
    public:
     double radius;
    Circle(double radius) : radius(radius) {}
        static double CalculateArea(double radius){
             return 3.14*radius*radius;
        }
  

};

class Rectangle : public Shape {
    public:
    double width;
    double height;
        Rectangle(double width, double height) : width(width), height(height) {}
         static double CalculateArea(double width, double height){
             return width*height;
        }
};

int main() {
    system("cls");
    double circleRadius, rectWidth, rectHeight;

    cout << "Enter the radius of a circle: ";
    cin >> circleRadius;

    cout << "Enter the width and height of a rectangle: ";
    cin >> rectWidth >> rectHeight;

    double circleArea=Circle::CalculateArea(circleRadius);
    double recArea=Rectangle::CalculateArea(rectWidth,rectHeight);

    cout<<"Cicile Area: "<<circleArea<<endl;
    cout<<"Rectangle Area: "<<recArea<<endl;

    Shape::CompareAreas(circleArea, recArea);

    return 0;
}
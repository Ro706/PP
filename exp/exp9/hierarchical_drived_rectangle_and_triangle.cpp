#include <iostream>
using namespace std;

class Shape {
public:
    virtual void computeArea() {
        cout << "Area of the shape" << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void computeArea() override {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    void computeArea() override {
        double area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

int main() {
    Shape* shape1 = new Rectangle(4.0, 5.0);
    Shape* shape2 = new Triangle(3.0, 6.0);

    shape1->computeArea(); 
    shape2->computeArea(); 

    delete shape1;
    delete shape2;

    return 0;
}







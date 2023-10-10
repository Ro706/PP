// WAP to implement method overloading to find the area of different shapes like square , rectangle, circel
#include<iostream>
#include<string>
using namespace std;
class A {
    public:
    double area(double side){
        return side * side;
    }
    double area(double length, double breadth){
        return length * breadth;
    }
    double area(double radius, string shape){
        if(shape == "circle"){
            return 3.14 * radius * radius;
        }
        else{
            return 0;
        }
    }
};
int main(){
    A area;
    double x = area.area(20);
    double y = area.area(20, 30);
    double z = area.area(2, "circle");

    cout<<"Area of Square = "<<x<<endl;
    cout<<"Area of Rectangle = "<<y<<endl;
    cout<<"Area of Circle = "<<z<<endl;
return 0;
}

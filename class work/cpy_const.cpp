#include <iostream>
using namespace std;
class wall
{
private:
    double length, height;

public:
    // initializes variables with parameterized constructor
    wall(double len, double hgt)
    {
        length = len;
        height = hgt;
    }
    // copy constructor with a wall object as parameter
    // copies data of the obj parameter
    wall(wall &obj)
    {
        length = obj.length;
        height = obj.height;
    }
    double calculateArea()
    {
        return length * height;
    }
};
int main()
{
    // create an object of wall class
    wall wall1(20.5, 9.6);
    // copy contents of wall1 to wall2
    wall wall2 = wall1;
    cout << "Area of wall 1 : " << wall1.calculateArea() << endl;
    cout << "Area of wall 2 : " << wall2.calculateArea();
    return 0;
}
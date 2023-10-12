//c)..Create a class named shape with a function that prints &quot;This is shape&quot;.Create another class
//named polygon inheriting the class shape printing &quot;Polygon is a shape&quot; in method.Create two
//rectangle and triangle having function for printing &quot;Rectangle is a polygon&quot; and &quot;Triangle is a
//polygon&quot; respectively.Try calling the functions of this classes using the object of only one class.
#include<iostream>
using namespace std;
class Animal {
    protected:
        std::string name;
    public:
        Animal(std::string n) {
            name = n;
        }
    public:
        virtual void printName() {
            std::cout << "Animal: " << name << std::endl;
        }
};

class Dog : public Animal {
    private:
        double weight;
    public:
        Dog(std::string n, double w) : Animal(n) {
            weight = w;
        }
    public:
        void printName() override {
            std::cout << "Dog: " << name << ", " << weight << " kg" << std::endl;
        }
};

int main() {
    Animal* a = new Animal("Leo");
    Dog* d = new Dog("Max", 10.5);
    a->printName();
    d->printName();
    delete a;
    delete d;
    return 0;
}


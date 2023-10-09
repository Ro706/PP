#include <iostream>
using namespace std;
class Complex {
public:
 Complex(double real, double imag)
 : realPart(real), imagPart(imag) {
 }
 Complex(const Complex& other)
 : realPart(other.realPart) {
 }
 Complex operator -- (const Complex& other) const {
        return Complex(realPart - other.realPart, imagPart - other.imagPart);
 }
 void display() const {
    cout << realPart;
 }
private:
 double realPart;
};
int main() {
 // Creating two complex numbers using the constructor
 Complex num1(3.0); //Number 1: 3 - 4i
 Complex num2(1.5); //Number 2: 1.5 + 2.5i
 // Adding two complex numbers using operator overloading and copy
//constructor
 Complex sum = num1 - num2;//Sub: 1.5 - 6.5i
 // Displaying the results
 cout << "Number 1: ";
 num1.display();
 cout << "Number 2: ";
 num2.display();
 cout << "Sub: ";
 sum.display();
 return 0;
}

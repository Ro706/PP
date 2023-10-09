#include <iostream>
using namespace std;
class Complex {
public:
 // Constructor to initialize real and imaginary parts
 Complex(double real, double imag)
 : realPart(real), imagPart(imag) {
 }
 // Copy constructor
 Complex(const Complex& other)
 : realPart(other.realPart), imagPart(other.imagPart) {
 }
 // Addition operator overload for complex numbers
 Complex operator - (const Complex& other) const {
        return Complex(realPart - other.realPart, imagPart - other.imagPart);
 }
 // Display complex number
 void display() const {
    cout << realPart;
  if (imagPart >= 0) {
    cout << " - " << imagPart << "i" << endl;
  } else {
    cout << " + " << -imagPart << "i" << endl;
  }
 }
private:
 double realPart;
 double imagPart;
};
int main() {
 // Creating two complex numbers using the constructor
 Complex num1(3.0, 4.0); //Number 1: 3 - 4i
 Complex num2(1.5, -2.5); //Number 2: 1.5 + 2.5i
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

#include <iostream> 
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
 Complex operator+(const Complex& other) const { 
 return Complex(realPart + other.realPart, imagPart + 
other.imagPart); 
 } 
 // Display complex number 
 void display() const { 
 std::cout << realPart; 
 if (imagPart >= 0) { 
 std::cout << " + " << imagPart << "i" << std::endl; 
 } else { 
 std::cout << " - " << -imagPart << "i" << std::endl; 
 } 
 } 
private: 
 double realPart; 
 double imagPart; 
};
int main() { 
 // Creating two complex numbers using the constructor 
 Complex num1(3.0, 4.0); // 3 + 4i 
 Complex num2(1.5, -2.5); // 1.5 - 2.5i 
 // Adding two complex numbers using operator overloading and copy 
//constructor 
 Complex sum = num1 + num2; 
 // Displaying the results 
 std::cout << "Number 1: "; 
 num1.display(); 
 std::cout << "Number 2: "; 
 num2.display(); 
 std::cout << "Sum: "; 
 sum.display(); 
 return 0; 
}

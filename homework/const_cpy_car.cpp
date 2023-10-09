#include <iostream> 
#include <string> 
class Car { 
public: 
 // Constructor 
 Car(const std::string& make, const std::string& model) 
 : make(make), model(model) { 
 std::cout << "Constructor called for " << make << " " << model << 
std::endl; 
 } 
 // Copy constructor 
 Car(const Car& other) 
 : make(other.make), model(other.model) { 
 std::cout << "Copy constructor called for " << make << " " << 
model << std::endl; 
 } 
 void display() const { 
 std::cout << "Make: " << make << std::endl; 
 std::cout << "Model: " << model << std::endl; 
 } 
private: 
 std::string make; 
 std::string model; 
};
int main() { 
 // Creating an object using the constructor 
 Car originalCar("Toyota", "Corolla"); 
 // Creating a new object using the copy constructor 
 Car copiedCar = originalCar; 
 // Displaying details of the original and copied car 
 std::cout << "Details of Original Car:" << std::endl; 
 originalCar.display(); 
 std::cout << "\nDetails of Copied Car:" << std::endl; 
 copiedCar.display(); 
 return 0; 
} 


#include <iostream> 
class Addition { 
public: 
 Addition(float num1, float num2, float num3) 
 : num1(num1), num2(num2), num3(num3) { 
 result = num1 + num2 + num3; 
 } 
 void displayResult() const { 
 std::cout << "Result of addition: " << result << std::endl; 
 } 
private: 
 float num1; 
 float num2; 
 float num3; 
 float result; 
};
int main() { 
 
 Addition add1(2.5, 3.7, 1.8); 
 Addition add2(10.0, 20.5, 5.5); 
 // Displaying results for the first set of values 
 std::cout << "For values (2.5, 3.7, 1.8):" << std::endl; 
 add1.displayResult(); 
 // Displaying results for the second set of values 
 std::cout << "\nFor values (10.0, 20.5, 5.5):" << std::endl; 
 add2.displayResult(); 
 return 0; 
}

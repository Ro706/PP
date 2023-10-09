#include <iostream>
int add(int a, int b) {
 return a + b;
}
double add(double a, double b) {
 return a + b;
}
int add(int a, int b, int c) {
 return a + b + c;
}
int main() {
 int x = 5, y = 10, z = 15;
 double a = 2.5, b = 3.7;
 std::cout << "Adding two integers: " << add(x, y) << std::endl;
 std::cout << "Adding two doubles: " << add(a, b) << std::endl;
 std::cout << "Adding three integers: " << add(x, y, z) << std::endl;
 
 return 0;
}

#include <iostream>
using namespace std;

class MyClass {
  public:
    MyClass() {
      cout << "Default constructor called." << endl;
    }
};

int main() {
  MyClass obj;
  return 0;
}

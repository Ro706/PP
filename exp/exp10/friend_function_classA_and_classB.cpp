#include <iostream>
using namespace std;

class ClassB;  // forward declaration

class ClassA {
public:
    int numA;
    ClassA() : numA(3) {}

    // friend function declaration
    friend int add(ClassA, ClassB);
};

class ClassB {
public:
    int numB;
    ClassB() : numB(7) {}

    // friend function declaration
    friend int add(ClassA, ClassB);
};

// friend function definition
int add(ClassA objA, ClassB objB) {
    return (objA.numA + objB.numB);
}

int main() {
    ClassA objA;
    ClassB objB;
    cout << "Sum: " << add(objA, objB);  // Outputs: Sum: 10
    return 0;
}


#include<iostream>
using namespace std;

class B;  // forward declaration

class A {
    int numA;
public:
    A(): numA(12) { }
    friend int max(A, B);  // friend function
};

class B {
    int numB;
public:
    B(): numB(200) { }
    friend int max(A, B);  // friend function
};

int max(A a, B b) {
    return (a.numA > b.numB ? a.numA : b.numB);
}

int main() {
    A a;
    B b;
    cout << "Max number: " << max(a, b);
    return 0;
}


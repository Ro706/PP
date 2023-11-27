#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {
        Complex temp(0, 0);
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp;
    }

    void display() {
        cout << "Real: " << real << ", Imaginary: " << imag << endl;
    }
};

int main() {
    Complex c1(2.0, 3.0);
    Complex c2(4.0, 5.0);
    Complex result = c1 + c2;
    result.display();
    return 0;
}


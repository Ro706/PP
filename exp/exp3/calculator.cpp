#include<iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double divide(int a, int b) {
        if(b != 0)
            return (double)a / b;
        else
            cout << "Division by zero is not allowed.";
            return 0;
    }
};

int main() {
    Calculator calc;
    int choice, num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Result: " << calc.add(num1, num2);
            break;
        case 2:
            cout << "Result: " << calc.subtract(num1, num2);
            break;
        case 3:
            cout << "Result: " << calc.multiply(num1, num2);
            break;
        case 4:
            cout << "Result: " << calc.divide(num1, num2);
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}


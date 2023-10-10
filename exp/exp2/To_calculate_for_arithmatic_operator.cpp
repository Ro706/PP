#include <iostream>
#include<conio.h>
using namespace std;
int main() {
    char op;
    double num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Cannot divide by zero." << endl;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
    }
    return 0;
}

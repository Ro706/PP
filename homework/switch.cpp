#include <iostream>

using namespace std;

int main() {
  char operators;
  int num1, num2;

  cout << "Enter an operator (+, -, *, /): ";
  cin >> operators;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  // Switch on the operator
  switch (operators) {
  case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2;
    break;
  case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2;
    break;
  case '*':
    cout << num1 << " * " << num2 << " = " << num1 * num2;
    break;
  case '/':
    cout << num1 << " / " << num2 << " = " << num1 / num2;
    break;
  default:
    cout << "Invalid operator";
  }

  return 0;
}

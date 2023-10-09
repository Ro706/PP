#include <iostream>
using namespace std;
int main() {
  int n, fact = 1, i;
  cout << "Enter a number: ";
  cin >> n;
  i = 1;
  while (i <= n) {
    fact *= i;
    i++;
  }
  cout << "The factorial of " << n << " is " << fact;

  return 0;
}

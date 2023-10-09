#include <iostream>

using namespace std;

int fibonacci(int n) {
  if (n <= 1) 
    return n;
  else 
	cout<< fibonacci(n - 1) + fibonacci(n - 2);
  
}

int main() {
  int n;
  cout << "Enter the nth Fibonacci number: ";
  cin >> n;

  fibonacci(n);
  return 0;
}


#include <iostream>

using namespace std;

int main() {
  int n, first = 0, second = 1, next;

  cout << "Enter the number of terms: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    if (i == 0 || i == 1) {
      cout << i << " ";
    } else {
      next = first + second;
      cout << next << " ";
      first = second;
      second = next;
    }
  }

  return 0;
}


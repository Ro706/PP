#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int rev =0;
  int temp = n;
  while (temp >0){
	  rev = rev * 10 +(temp%10);
	  temp/=10;
  }
  if (rev==n) {
    cout << n << " is a palindrome.";
  } else {
    cout << n << " is not a palindrome.";
  }
  return 0;
}

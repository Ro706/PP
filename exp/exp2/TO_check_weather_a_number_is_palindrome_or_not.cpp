//WAP in c++ to check weather a number palindrome or not 
#include<iostream>
using namespace std;
int main(){
	int n,t,rev=0;
	cout <<"Enter a number:";
	cin >> n;
	t = n ;
	while(n>0){
		rev=rev*10+n%10;
		n/=10;
	}
	if(t == rev)
		cout<<"palindrome";
	else
		cout<<"not a palidrome";
	return 0;
}

//fibbonacci series
#include<iostream>
using namespace std;
int main(){
	int n,f=0,s=1,next;
	cout <<"Enter the number of terms:";
	cin >> n;
	for (int i =0;i<n;i++){
		if (i==0 || i==1)
			cout<<i<<" ";
	        else{
			next = f+s;
			cout<<next<<" ";
			f=s;
			s=next;
		}
	}
}

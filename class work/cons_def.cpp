#include<iostream>
using namespace std;
class A{
	public :
		int m ;
	public:
	A(){
		m = 123;
		cout <<"Done rohit";
	}
	void display(){
		cout<<"m value is "<<m<<endl;
	}
};
int main(){
	A a1;
	a1.display();
	return 0;
}

#include<iostream>
using namespace std;
class A{
	protected :
		int a ;
	public :
		void get_a(int n){
			a =n; 
		}
};
class B {
	protected :
		int b;
	public :
		void get_b(int n){
			b = n;
		}
};
class c : public A : public B{
	public :
		void display(){
			cout<<"THe valur of A is"<<a<<endl;
			cout<<"The valur of B is"<<b<<endl;
			cout<<"Addition of A and B is "<<a+b<<endl;
		}
};
int main(){
	C c;
	c.get_a(3);
	c.get_b(7);
	c.display();


}

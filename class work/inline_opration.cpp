#include<iostream>
using namespace std;
class opration
{
public:
	int a=9,b=10;
public:
	operation(){cout<<"HelloWorld!";}; 
	void add();
	  void sub();
	  void mul();
	  void div();
};
inline opration::operation(){
}
inline  opration::add(){
	cout<<a<<"+"<<b<<"="<<a+b;
}
inline opration::sub(){
        cout<<a<<"-"<<b<<"="<<a-b;
}
inline opration::mul(){
        cout<<a<<"*"<<b<<"="<<a*b;
}
inline opration::div(){
        cout<<a<<"/"<<b<<"="<<a/b;
}
int main()
{
	opration op;
		op.add();
		op.mul();
		op.sub();
		op.div();
}
	

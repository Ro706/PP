#include<iostream>
using namespace std;
class operation
{
public:
	int a=9,b=10;
public:
	operation(){cout<<"HelloWorld!";} 
	void add();
	  void sub();
	  void mul();
	  void div();
};
inline  void operation::add(){
	cout<<a<<"+"<<b<<"="<<a+b<<endl;
}
inline void operation::sub(){
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
}
inline void operation::mul(){
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
}
inline void  operation::div(){
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
}
int main()
{
	operation op;
		op.add();
		op.mul();
		op.sub();
		op.div();
}
	

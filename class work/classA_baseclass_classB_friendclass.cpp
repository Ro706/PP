#include<iostream>
using namespace std;

class B;
class A{
	private:
		int noA;
		friend class B;
	public:
		A():noA(20){}
};
class B{
	private:
		int noB;
	public:
		B():noB(5){}
		int add(){
			A a1;
			B b1;
			return a1.noA + b1.noB;
		}
};
int main(){
	B b1;
	cout<<"sum ="<<b1.add();
	return 0;
}


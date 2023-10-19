#include<iostream>
using namespace std;
class test{
	private:
		int m ;
		//friend function
		friend int add(test);
	public:
		test():m(0){}
};
//friend function def
int add(test t){
	t.m+=5;
	return t.m;
}
int main(){
	test t;
	cout <<"Result="<<add (t);
	return 0;
}


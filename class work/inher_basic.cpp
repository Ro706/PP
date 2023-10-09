#include<iostream>
using namespace std;
class A{
    public:
	    float bonus;
};
class B : public A{
	public :
		float salary;
};
int main(){
	B b1;
	b1.bonus = 20.009;
	b1.salary = 300000000;
	cout << "bonus is "<<b1.bonus<<endl;
	cout << "salary is "<<b1.salary<<endl;
};
	

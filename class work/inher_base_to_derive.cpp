#include<iostream>
using namespace std;
class A{
    public:
            float bonus;
	    void displaya(){
		cout<<"Hello rohit"<<endl;
	    }
};
class B : public A{
        public :
                float salary;
		void displayb(){
		    cout<<"hey ro706"<<endl;
		}
};
int main(){
        B b1;
	b1.displaya();
	b1.displayb();
        b1.bonus = 20.009;
        b1.salary = 300000000;
        cout << "bonus is "<<b1.bonus<<endl;
        cout << "salary is "<<b1.salary<<endl;
};

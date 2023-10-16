#include<iostream>
using namespace std;
class base{
	public:
		virtual void print(){
			cout<<"this  is  a base class function"<<endl;
		}
		void display(){
                        cout<<"This is not virtual function base class"<<endl;
                }
};
class derived:public base{
	public:
		void print(){
			cout<<"this  is  a derived class function"<<endl;
		}
		void display(){
			cout<<"This is not virtual function"<<endl;
		}
};
int main(){
	base * bp;
	derived d;
	bp = &d;
	bp -> print();
	bp -> display();

/*	derived * dp;
        base b;
        dp = &b;
        dp -> print();
     dp -> display();

*/


	return 0;
}



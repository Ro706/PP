#include<iostream>
using namespace std;
class person{
	private:
		int age;
		string name;
	public:
		void setage(int age){
			this->age=age;
		}
		int getage(){
			return age;
		}
		void set_name(string name){
			this->name=name;
		}
		string getname(){
			return name;
		}
};
int main(){
	person p;
	p.setage(20);
	p.set_name("Ro706");
	cout<<"Age:"<<p.getage()<<endl;
	cout<<"Name:"<<p.getname()<<endl;
	return 0;
}

#include<iostream>
using namespace std;
class person{
	private:
		int age;
		string name;
	public :
		void setage(int age){
			this -> age;
		}
	        void disp(){
			cout <<"Age is"<<age<<endl;
		}
		int ds(){
			return age;
		}
};
	
int main(){
	person p;
	int age =20;
	p.setage(age);
	p.disp();
	p.ds();
	return 0;
}


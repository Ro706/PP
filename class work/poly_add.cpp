//Q.wAP to implement function overloading for addition of three different set of value.
#include<iostream>
using namespace std;
class addition{
	public:
		int add(int a,int b,int c){
			return a+b+c;
		}
		double add(double a ,double b, double c){
			return a+b+c;
		}
		double add(double a,int b ,int c){
			return a+b+c;
		}
};
int main(){
	addition add1;
        cout <<add1.add(1,2,4)<<endl;
	cout <<add1.add(1.0,1.2,9.2)<<endl;
	cout <<add1.add(8.5,1,4)<<endl;
}

//Q.wAP to implement method overloading to find the area of different shapes like square rectangle and circle.
#include<iostream>
using namespace std;
class shape{

	public:
		double area(double a,double b){
			return a *b;
		}
		int area(int a){
			return a *a;
		}
		double area(double r){
			return 3.14*r*r;
		}
};
int main(){
	shape s;
	cout <<"area of rect: "<<s.area(5.0,3.0)<<endl;
	cout <<"area of squ: "<<s.area(5)<<endl;
	cout <<"area of circle: "<<s.area(7.0)<<endl;
}
	

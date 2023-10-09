//write c++ program to implement single inheritance class shape to initial the parameter of diff shape and class area is drive from shape class to implement to find out the area of circle square and reactangle
#include<iostream>
using namespace std;
class para{
	public :
		double l;
		double b;
		double r;
};
class area : public para{
	public :
		void rea(double l,double b,double r){
			cout <<"area of square "<<l*l<<endl;
			cout <<"area of rectangle "<<l*b<<endl;
			cout <<"erea of circle "<<3.14*r*r<<endl;
		}
     	 
};
int main(){
	area a;
	a.l = 20;
	a.b = 30;
        a.r = 7.01;
	a.rea(a.l,a.b,a.r);
}
        	

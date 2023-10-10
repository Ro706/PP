#include<iostream>
using namespace std;
class shape{
	public:
		double l,w,h;
	public:
		double area(){
			return l*w;
		
		}
		double volume(){
			return l*w*h;
		}

};
int main(){
	shape r;
	cout<<"Enter a length,width,and hight:"<<endl;
	cin>>r.l>>r.w>>r.h;
	int area = r.area();
	cout<<"area :"<<area<<endl;
	int vol = r.volume();
	cout<<"Vol :"<<vol<<endl;
	return 0;
}

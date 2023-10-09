#include<iostream>
using namespace std;
class Room {
        public:
           double length;
           double width;
	   double r;
        double rectangle(){
                return length*width;
        }
        double square(){
		return length*length;
	}
	double circle(){
		return r * r * 3.14;
	}
};
int main(){
        Room r1;
        cout<<"Enter a length ,width,and radius here:"<<endl;
	cin>>r1.length>>r1.width>>r1.r;
        cout << "Area of rectangle :" << r1.rectangle() << endl;
        cout << "Area of square:" << r1.square() << endl; 
	cout << "Area of circle:" << r1.circle() << endl;
	return 0;
}


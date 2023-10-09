#include<iostream>
using namespace std;
class Room {
        public:
           double length;
           double width;
           double hight;

	double area(){
                return length*width;
        }
	double volume(){
		return length*width*hight;
	}
};
int main(){
	Room r;
	cout<<"Enter a length ,width,and hight here:"<<endl;
        cin>>r.length>>r.width>>r.hight;
        cout << "Area of room:" << r.area() << endl;
        cout << "Volume of room:" << r.volume() << endl;
	return 0;
}

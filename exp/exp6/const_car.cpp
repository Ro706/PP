#include<iostream>
using namespace std;
class car {
	public:
		double model,mil;
		void display(){
			cout <<"car model no:"<<model<<endl;
			cout <<"car milage: "<<mil<<endl;
		}
};
int main(){
	car c[7];
	for (int i =0;i<7;i++){
		cout <<"Enter model no:"<<endl;
		cin >> c[i].model;
		cout <<"Enter milage: "<<endl;
		cin >>c[i].mil;
		}
	int max = c[0].mil,index = 0;
	for (int i = 1;i<7;i++){
		if(max <c[i].mil){
			max = c[i].mil;
			index = i;
		}
	}
	cout <<"The max milage is ";
	cout <<max<<endl;
        cout <<"And car model no is ";
	cout <<c[index].model<<endl;
	return 0;
}

#include<iostream>
using namespace std;
//create a class car if the car model and mileage is given as input find the car model 
//whose mileage is hightest and display both the car model and mileage if the saver entry is give to program use oops
class car{
	//data member
	public :
	double model[7];
	double mil[7];
	//data function
	void inp(){
	  for(int i = 0;i<7;i++){
	  cout<<"Enter a model number:"<<endl;
	  cin >> model[i];
	  cout <<"Enter a mileage:"<<endl;
	  cin >> mil[i];
		}
	}

	void display(){
		int max = mil[0],index = 0;
		for (int i =1;i<7;i++){
			if (max < mil[i]){
				max = mil[i];
				index =i;
			}

		}
		cout << "highest Model no :"<<model[index]<<" and mileage:"<<max<<endl;
	}
};
int main(){
	car c;
	cout <<"Enter a data here"<<endl;
	c.inp();
	c.display();
	return 0;
}
		

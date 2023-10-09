//create a class employee use constructor to init the detail of emp name salary doj and display the detail of 5 emp
#include<iostream>
using namespace std;
class emp{
	public :
	  int doj;
	  double salary;
	  string name;
	public:
	  emp(){
		 cout<<"Enter a name of emp:"<<endl;
		 cin>> name;
		 cout <<"Enter date of joining:"<<endl;
		 cin >>doj;
		 cout <<"Enter a salary:"<<endl;
		 cin>>salary;
	  }
	  void display(){
		  cout <<"name:"<<name<<" doj :"<<doj<<" salary :"<<salary<<endl;

	  }
};
int main(){
	emp e1[5];
	for (int i =0;i<5;i++){
		e1[i].display();
	}
	return 0;
}
		

#include<iostream>
using namespace std;
class ABC{
	public :
	   void displayabc(){
		cout << "This is a ABC co.ltd";
	}
};
class emp : public ABC{
	private :
		string empname,depname,doj;
		float salary;
	public :
		void detail(){
			cout<<"Enter a detail :";
			cin>>"Name: "<<empname;
			cin>>"depname: "<<depname;
			cin>>"Date of joining: "<<doj;
		}
		void displayempldetail(){
			cout <<
};


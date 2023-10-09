//write a c++ program ::create a class org to init the detail of the employee such as desg name total salary (basic da hra) of emp create a drive class calculate salary to calculate the total salary of emp if basic of emp is greater then 25000 then bonus amout 5000 is  else 3000 the display all the detail of employee for 5
#include<iostream>
using namespace std;
class org{
	public :
	  string name;
	  string desg;
	  double basic;
	  double da ;
	  double hra;
};
class salary : public org{
	public :
		double salary;
		void salarys(double basic ,double da,double hra){
			salary 	= basic + da + hra ;
			if (salary >25000)
				salary += 5000;
		        else 
			    	salary += 3000;
		 	cout <<"the total salary of employee is "<<salary<<endl;	

		}
};
int main(){
	salary emp1,emp2,emp3,emp4,emp5;
	emp1.name="rohit";
	emp2.name= "gourav";
	emp3.name = "nishant";
	emp4.name = "aryan";
	emp5.name = "aditya";
	emp1.desg ="ceo";
	emp2.desg ="Developer";
	emp3.desg ="software engee";
	emp4.desg ="manager";
	emp5.desg = "team manager";
	emp1.da= 11130.001;emp1.basic=129.889;emp1.hra = 9290;
	emp2.da= 11130.001;emp2.basic=129.889;emp2.hra = 3290;
	emp3.da= 11130.001;emp3.basic=129.889;emp3.hra = 2290;
	emp4.da= 11130.001;emp4.basic=129.889;emp4.hra = 3290;
	emp5.da= 11130.001;emp5.basic=129.889;emp5.hra = 5290;
	cout << "name :"<<emp1.name<<" desg :"<<emp1.desg<<endl;
	emp1.salarys(emp1.basic,emp1.da ,emp1.hra);
	 cout << "name :"<<emp2.name<<" desg : "<<emp2.desg<<endl;
        emp2.salarys(emp2.basic,emp2.da ,emp2.hra);
	 cout << "name :"<<emp3.name<<" desg :"<<emp3.desg<<endl;
        emp3.salarys(emp3.basic,emp3.da ,emp3.hra);
	 cout << "name :"<<emp4.name<<" desg :"<<emp4.desg<<endl;
        emp1.salarys(emp4.basic,emp4.da ,emp4.hra);
	 cout << "name :"<<emp5.name<<" desg :"<<emp5.desg<<endl;
        emp1.salarys(emp5.basic,emp5.da ,emp5.hra);
}

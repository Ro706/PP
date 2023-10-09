/*create a constructor student calculate the total marks of the students in  5 subjects  and  then  find the students with least total marks student[5] in c++ */
#include<iostream>
#include<string>
using namespace std;
class stud{
	public:
	  double maths ,eng, comp ,phy ,chem, total;
	public:
	  stud(double maths, double eng,double comp,double phy,double chem){
            this->maths = maths;
            this->eng = eng;
	    this->comp = comp;
            this->phy = phy;
            this->chem = chem;
	  }
	  double sum(){
		this->total = maths+eng+comp+phy+chem;
		cout << "Sum of all subject:"<<total<<endl;
		return total;
	  }
	 

};

int main(){
   double a[5];
   double min;
   stud studs[5]={
	stud(80.0,90.5 , 50.80, 70.99,99.91),
        stud(90.9,100 , 35.80, 30.99,39.91),
        stud(80.0,90.5 , 50.80, 70.99,99.91),
        stud(70.02,50.5 , 80.880, 80.99,89.91),
        stud(87.0,91.5 , 56.80, 72.99,100),
   };
   for (int i = 0; i < 5; i++) {
        a[i]=studs[i].sum();
    }
   min = a[0];
   for(int j = 0;j<5;j++) {
	   if (min > a[j])
		   min = a[j];
	}
   cout <<"The least value is :"<<min<<endl;
   return 0;
}


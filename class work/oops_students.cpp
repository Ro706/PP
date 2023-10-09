//create a class student with two member function get details and display details and show the record of 
//10 number of student using array of object.
#include<iostream>
using namespace std;
class student{
	public :
		int rollno;
		double marks;
		void detail(int rollno,int marks){
			cout << "roll no.:"<<rollno<<endl<< "marks:"<<marks<<endl;	
		}

};
int main(){
	student s[10];
       for (int i = 0;i<3;i++){
	cout <<"Enter a rollno:"<<endl;
       	cin>>s[i].rollno;
	cout <<"Enter a marks:"<<endl;
        cin >>s[i].marks;	
       }
       for (int i = 0;i<3;i++){
        cout <<"rollno:"<<s[i].rollno<<endl;
        cout <<"marks:"<<s[i].marks<<endl;
       }
       return 0 ;
}

#include<iostream>
using namespace std;
class stu{
	public:
		int roll;
		double height;
	void disp(){
		cout << "roll no.:"<<roll<<" hight:" << height<<endl;
	}
};
int main(){
	int n ;
	cout << "Enter the number of student"<<endl;
	cin >> n;
	stu s[n];
	for(int i = 0 ;i<n;i++)
	{
		cout <<"Enter a roll no:"<<endl;
		cin >>s[i].roll;
		cout <<"Enter a height:"<<endl; 
		cin>>s[i].height;
	}
	for(int i = 0;i<n;i++)
		s[i].disp();
	int avg=0;
	for(int i =0;i<n;i++)
		avg +=s[i].height;
	avg = avg/n;
	cout <<"avg height is "<<avg<<endl;
	return 0;
}


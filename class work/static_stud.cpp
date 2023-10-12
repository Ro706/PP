#include<iostream>
using namespace std;
class student{
public:
	static int total;
	student(){
		total +=1;
	}
};
	int student :: total =0;

int main(){
	student s1;
	cout <<"No of student ="<<s1.total<<endl;
        cout <<"No of student ="<<s1.total<<endl;
	student s2;
        cout <<"No of student ="<<s2.total<<endl;
	return 0;
}

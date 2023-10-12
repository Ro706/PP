#include<iostream>
using namespace std;
class box{
private:
        static int l;
	static int b;
	static int h;
	static int i;
public:       
       	static void phase(){
		cout << "The value of L:"<<l<<endl;
		cout << "The value of B:"<<b<<endl;
		cout << "The value of H:"<<h<<endl;
		cout << "The value of I:"<<i<<endl;
	}
};
        int box :: l=10;
	int box :: b=20;
	int box :: h=30;
	int box :: i=30;

int main(){
        box b1,b2;
	b1.phase();
	b2.phase();
	box b3;
	b3.phase();
	return 0;
}

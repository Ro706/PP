#include<iostream>
using namespace std;
class bank{
	public:
	double balance,intres,intrec;
        public:
        double saving_acc(double balance,double intres){
                return balance + (balance*intres);
        }
	double checking_acc(double balance ,double intrec){
		return balance + (balance*intrec);
	}
};
int main(){
	double balance,intre;
        bank b[5];
	for(int i = 0;i<5;i++){
	cout <<"Enter your balance and intre: "<<endl;
	cin >>balance>>intre;
	cout << "your saving acc has :" << b[i].saving_acc(balance,intre) << endl;
	cout << "your checking acc has :" << b[i].checking_acc(balance,intre)<<endl;
	}	
        return 0;
}

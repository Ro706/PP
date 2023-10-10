#include<iostream>
using namespace std;
class bank{
        private:
                string name;
                string doo;
                int acc_no;
		float balance;
        public :
                bank(const string & name,const string doo,int acc_no,float balance):name(name),doo(doo),acc_no(acc_no),balance(balance){}
                void displayDetail()const{
                                cout <<"custommer :"<<name<<endl;
                                cout <<"account number :"<<acc_no<<endl;
                                cout <<"balance :"<<balance<<endl;
			     	cout <<"date of opening:"<<doo<<endl;
                                cout <<"-------------------------------"<<endl;
                        }

};
int main()
{
        bank bk1("ro706","10-10-2023",111111,12000);
        bank bk2("Rohit","10-10-2023",111112,12103);
	bank bk3("Jl","10-10-2023",111113,11000);
        bank bk4("J.K","10-10-2023",111114,2000);
	bank bk5("brownling","10-10-2023",111115,100);
        cout <<"Detail of custommer : "<<endl;
        bk1.displayDetail();
        bk2.displayDetail();
        bk3.displayDetail();
        bk4.displayDetail();
        bk5.displayDetail();
}

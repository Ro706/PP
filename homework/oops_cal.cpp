#include<iostream>
using namespace std;
class cal {
        public:
           double var_a;
           double var_b;

        double add(){
                return var_a+var_b;
        }
        double sub(){
                return var_a-var_b;
	}
	double mult(){
		return var_a*var_b;
	}
	double div(){
		return var_a/var_b;
	}
};
int main(){
	int ops;
        cal c;
        cout <<"Enter a data 1,& data 2 here:"<<endl;
        cin >>c.var_a>>c.var_b;
	cout << "Enter a option index number as shown below:"<<endl;
	cout << "1) add ,2) sub ,3) mult,4)div"<<endl;
	cin >> ops ;
	switch (ops){
		case 1:
			cout <<"addition of "<<c.var_a<<"and"<<c.var_b<<" "<<c.add();
			break;
	   	case 2:
			cout <<"subtraction of "<<c.var_a<<"from"<<c.var_b<<" "<<c.sub();
			break;
		case 3:
			cout <<"multiplication of "<<c.var_a<<"to"<<c.var_b<<" "<<c.mult();
			break;
		case 4:
			cout <<"division of "<<c.var_a<<"by"<<c.var_b<<" "<<c.mult();
			break;
		defult:
			cout << "err option is not present";
			break;
	}
        return 0;
}

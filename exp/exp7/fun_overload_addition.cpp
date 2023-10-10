// WAP to implement function overloading for addition of three different set of values.
#include<iostream>
using namespace std;
class A{
    public:
    int add(int num1,int num2, int num3){
        return num1+num2+num3;
    }
    double add(double num1, double num2, double num3){
        return num1 + num2 + num3;
    }
};
int main(){
    A a1;
    double sum_doub;
    int sum_int;
    sum_int = a1.add(20,20,20);
    sum_doub= a1.add(20.3,20.3,20.3);

    cout<<"Addition of integer values = "<<sum_int<<endl;
    cout<<"Sum of DOuble values = "<<sum_doub<<endl;

    return 0;
}

#include<iostream>
using namespace std;
class shape{
    public:
       int l=1,b=2,h=3,base =2;

};
class rectangle: public shape{
    public:
        void calcrect(){
            cout<<"area of reactangle is "<<l*b<<endl;
    }
};
class triangle: public shape{
    public:
        void calcrect(){
            cout<<"area of triangle is "<<0.5*base*h<<endl;
    }
};
int main(){
    rectangle s1;
    s1.calcrect();
    triangle t1;
    t1.calcrect();
    return 0;
}
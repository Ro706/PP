#include<iostream>
#include<conio.h>
using namespace std;
class A{
    public:
        A(){
            int i = 10;
            cout<<"i = "<< i<<endl;
        }

    void display(){
        cout<<"This is another member function of the class"<<endl;
    }
};
int main(){
    A a1[5];
    for(int i = 0; i<5; i++){
        a1[i].display();
    }
    
    return 0;
}

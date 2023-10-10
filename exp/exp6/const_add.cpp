#include<iostream>
using namespace std;
class add{
        public :
          float result,num1,num2,num3;
        public:
          add(float n1,float n2, float n3){
                num1 =n1;
                num2 =n2;
                num3 =n3;
                result = num1 + num2 +num3;
          }
          void display(){
                  cout <<"sum of 3 number :"<<endl;
                  cout <<num1<<"+"<<num2<<"+"<<num3<<" = "<<result;

          }
};
int main(){
        float a ,b,c;
        cout <<"Enter 3 number :"<<endl;
        cin>>a>>b>>c;
        add a1(a,b,c);
        a1.display();
}

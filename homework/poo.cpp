#include<iostream>
using namespace std;
class stu{
    public:
        int n=10;
        float h[n],sum;
    public:
     	int input(){
            for(int i=0;i<n;i++){
                cout<<"enter height of student "<<i+1<<endl;
                cin>>h[i];
            }
        }
        float sums(){
            for(int i=0;i<n;i++){
                sum+=h[i];
            }
        }
};
int main(){
    stu hi;
    int n;
    cout<<"enter no. of students\n";
    hi.input();
    cout<<hi.sums();
    return 0;
}

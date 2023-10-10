// Q3. WAP to calculate the avg. height of all the students of the class, the number of students and their heights are entered by user. Use array of objects.

#include<iostream>
#include<conio.h>
using namespace std;
class Student{
    public:
    float height;
    void getdetails(){
        cout<<"Enter Height (in cm) : ";
        cin>>height;
    }
};
int main(){
    int n;
    cout<<"Enter Number of Students = ";
    cin>>n;

    Student s1[n];
    
    for(int i = 0; i<n; i++){
        cout<<"Student "<<i+1<<endl;
        s1[i].getdetails();
        cout<<endl;
    }
    float total=0.0,avg = 0.0;
    for(int i=0;i<n;i++){
        total = total + s1[i].height;
    }
    avg = total / n;
    cout<<"Average height of class Students is = "<<avg<<endl;

    return 0;
}

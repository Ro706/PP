//write a program in c++ to print the detail of 10 student including name prnm branch sem and fav programming language of the student using the function overloading.
//write a programming the c++ to overload unary - operator for performming   
#include<iostream>
using namespace std;
class student{
    public:
        string name,branch,fav_pro_language;
        int prn,sem;
    public: 
        void stud(string name,string branch,string fav_pro_language){
            name = name;branch = branch; fav_pro_language = fav_pro_language;        
        }
        void stud(int prn ,int sem){
            prn = prn ;
            sem = sem;
        }
        void display(){
            cout << "name of student :"<<name<<" branch:"<< branch << " fav programming language is "<<  fav_pro_language<<endl;

        }
};


int main(){
    int prn,sem;
      string name,branch,fav_pro_language;
    student s[10];
    for(int i = 0;i<5;i++){
        cout<<"Enter a name:"<<endl;
        cin >> name;
        cout <<"Enter a branch:"<<endl;
        cin >> branch;
        cout <<"Enter a fav_pro_language:"<<endl;
        cin >> fav_pro_language;
        s[i].stud(name,branch,fav_pro_language);
        cout <<"Enter a prn and sem"<<endl;
        cin >>prn>>sem;
        s[i].stud(prn,sem);
    }
    for(int i = 0;i<5;i++){
        s[i].display();
    }
}
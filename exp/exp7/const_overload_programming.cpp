// Create a class named programming. While creating an object of the class if mothing is passed to it then the message "I like Programming Language" is printed, if some string is passed to it then in place of programming language the name  of string variable should be printed.
#include<iostream>
#include<string.h>
using namespace std;
class programming{
    public:
    programming(){
        cout<<"I like Programming language."<<endl;
    }
    programming(string s){
        cout<<"I like "<<s<<" Programming Language"<<endl;
    }
};
int main(){
    programming p1;
    string s1;
    cout<<"Enter text : ";
    cin>>s1;
    programming p2(s1);
    return 0;
}

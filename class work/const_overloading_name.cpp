#include <iostream>
#include<string>
using namespace std;
class student {
public:
    string name  ="Unknown";
public:
    student(string n) {
        cout <<"name:"<<n<<endl;
    }
    student() {
        cout <<"name:"<< name <<endl;
    }

};

int main() {
    student s1;
    student s2("Rohit");
    student s3("JJ thomsom");
    student s4("Nishant");

    return 0;
}

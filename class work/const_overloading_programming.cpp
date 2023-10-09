#include <iostream>
#include<string>
using namespace std;
class programming {
public:
    string like  ="programming language";
public:
    programming(string n) {
        cout <<"i like "<<n<<endl;
    }
    programming() {
        cout <<"i like "<< like <<endl;
    }

};

int main() {
    programming p1;
    programming p2("python and web dev");
    return 0;
}

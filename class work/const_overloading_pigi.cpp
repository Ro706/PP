#include <iostream>
using namespace std;
class pigi {
public:
    int amtd=50;
public:
    pigi() {
        cout <<"$"<<amtd<<endl;
    }

    pigi(int amt) {
        amtd += amt;
	cout <<"$"<<amtd<<endl;
    }
};

int main() {
    pigi a1();
    pigi a2(10);
    return 0;
}

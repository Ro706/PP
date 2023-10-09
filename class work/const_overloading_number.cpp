#include <iostream>
#include<string>
using namespace std;
class print_number {
public:
    print_number(int n) {
        cout <<n<<endl;
    }
    print_number(double n) {
        cout <<n<<endl;
    }
    print_number(string n) {
        cout <<"'"<<n<<"'"<<endl;
    }

};

int main() {
    print_number p1(1);
    print_number p2(1.230);
    print_number p3("1");
    return 0;
}

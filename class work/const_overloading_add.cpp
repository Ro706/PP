#include <iostream>
using namespace std;
class add {
public:
    int x;
    int y;

    add() {
        x = 0;
        y = 0;
    }

    add(int x, int y) {
        this->x = x;
        this->y = y;
    }

    add operator+(const add& other) {
        return add(x + other.x, y + other.y);
    }
};

int main() {
    add a1(1, 2);
    add a2(3, 4);

    add a3 = a1 + a2;

    cout << a3.x << " " << a3.y << endl;

    return 0;
}	      	   

//  WAP in C++ to overload Binary aestric operator
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    Complex operator*(Complex &obj)
    {
        Complex res;
        res.real = real * obj.real - img * obj.img;
        res.img = real * obj.img + img * obj.real;
        return res;
    }
    void display()
    {
        cout << real << " is " << img << endl;
    }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 * c2;
    c3.display();
    return 0;
}

#include <iostream>
using namespace std;
class add
{
private:
    int num_i, num;

public:
    add(int n1, int i1, int n2, int i2)
    {
        num = n1 + n2;
        num_i = i1 + i2;
    }
    add(add &obj)
    {
        num = obj.num;
        num_i = obj.num_i;
    }
    void display()
    {
        cout << num << " + (" << num_i << ")i" << endl;
    }
};
int main()
{
    int n10, n11, n20, n21;
    char i1, i2;
    cout << "Enter the first complex number(+/-num1 +/-num2 i): ";
    cin >> n10 >> n11 >> i1;
    cout << "Enter the second complex number(+/-num1 +/-num2 i): ";
    cin >> n20 >> n21 >> i2;
    add a(n10, n11, n20, n21);
    cout << "Addition = ";
    a.display();
    return 0;
}
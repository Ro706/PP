// WAP in cpp to overload a constructor for performing addition operation with a different set of values.
#include <iostream>
using namespace std;
class Add
{
public:
    Add(int num1, int num2)
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    Add(double num3, double num4)
    {
        cout << num3 << " + " << num4 << " = " << num3 + num4 << endl;
    }
};
int main()
{
    Add a1(12, 12);
    Add a2(12.4, 12.5);
    return 0;
}
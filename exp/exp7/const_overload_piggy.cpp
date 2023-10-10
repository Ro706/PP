// Suppose you have a piggy bank with an initial amount of dollar 50 and you have to add some more amount to it. Create a class add amount with a datamember, name, amount with an initial amt of dollar 50. Now make 2 constructor of this class as follows:
// 1} Without any parameter - no amt will be added to the piggy bank.
// 2} Having a parameter which is the amount that will be added to piggy bank.
// Craete an oobject of add amt class & display th final amt in piggy bnk
#include <iostream>
using namespace std;
class amt
{
public:
    double amount = 50;
    amt(){}
    amt(int num)
    {
        cout << "Amount of $" << num << " is added to piggy bank." << endl;
        amount += num;
    }
    amt(double num1)
    {
        cout << "Amount of $" << num1 << " is added to piggy bank." << endl;
        amount += num1;
    }
    void display()
    {
        cout << "Final Amount in Piggy Bank is = $" << amount << endl;
    }
};
int main()
{
    amt a1;
    a1.display();
    amt a2(20);
    a2.display();
    amt a3(203.34);
    a3.display();
    return 0;
}

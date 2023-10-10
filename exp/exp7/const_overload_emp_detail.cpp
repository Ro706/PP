// WAP to overload the constructor for initialziing and displaying the employee details including, employee id, name, designation, date of joining.
#include <iostream>
#include <string.h>
using namespace std;
class employee
{
public:
    int id;
    string doj;
    string name;

    employee()
    {
        id = 0;
        name = "NA";
        doj = "NA";
    }
    employee(int i, string nam, string d)
    {
        id = i;
        name = nam;
        doj = d;
    }
    void display()
    {
        cout << "Employee Details :" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Date of joining: " << doj << endl;
    }
};
int main()
{
    employee e1;
    e1.display();
    employee e2(70, "Aryan", "20/3/23");
    e2.display();
    return 0;
}
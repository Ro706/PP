// Q2. WAP to print the name, salary, and date of joining of 10 employees in a company. Use array of objects.
#include <conio.h>
#include <iostream>
using namespace std;
class Employee
{
public:
    char name[50];
    float salary;
    int date;

    void getdetails()
    {
        cout << "Enter Name : " <<endl;
        cin >> name;
        cout << "Enter Salary : " <<endl;
        cin >> salary;
        cout << "Enter Joining Date : " <<endl;
        cin >> date;
    }
    void display()
    {
        cout << "Name = " << name <<endl;
        cout << "Salary = " << salary <<endl;
        cout << "Joining Date = " << date <<endl;
    }
};
int main()
{
    Employee e1[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Details of Employee " << i + 1 << " : " << endl;
        e1[i].getdetails();
        cout << endl;
    }
    cout << "Employee Details : " << endl;
    for (int i = 0; i < 10; i++)
    {
        e1[i].display();
        cout<<endl;
    }
    return 0;
}

/* Create a class employee use a constructor to intitialize details of the employee : name, id, salasry, joining sate. Display the details of 5 employee*/

#include <iostream>
#include <conio.h>
using namespace std;
class employee
{
public:
    char name[100];
    float id, salary;
    char date[20];
    employee()
    {
        cout << "Name : ";
        cin >> name;
        cout << "ID : ";
        cin >> id;
        cout << "Salary : ";
        cin >> salary;
        cout << "Joining Date : ";
        cin >> date;
        cout << endl;
    }
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "ID = " << id << endl;
        cout << "Salary = " << salary << endl;
        cout << "Joining Date = " << date << endl;
    }
};
int main()
{
    employee m1[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Deatils of Employee " << i + 1 << " =>" << endl;
        m1[i].display();
    }
    return 0;
}

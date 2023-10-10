// create a class student with two member functions, get details and display details and show the record of 10 students using array of objects.

#include <iostream>
#include <conio.h>
using namespace std;
class Student
{
public:
    char name[50];
    int PRN;
    float marks;
    void get_details()
    {
        cout << "Enter Name : " << endl;
        cin >> name;
        cout << "Enter PRN : " << endl;
        cin >> PRN;
        cout << "Enter Marks Scored : " << endl;
        cin >> marks;
    }
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "PRN = " << PRN << endl;
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    Student s[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter details for student " << i + 1 << " : " << endl;
        s[i].get_details();
        cout << endl;
    }
    cout << "Student Records : " << endl;
    for (int i = 0; i < 10; i++)
    {
        s[i].display();
        cout << endl;
    }
    return 0;
}

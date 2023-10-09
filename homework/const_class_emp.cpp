#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        string name;
        int id;
        float salary;
        string date_of_joining;

        Employee(string name, int id, float salary, string date_of_joining) {
            this->name = name;
            this->id = id;
            this->salary = salary;
            this->date_of_joining = date_of_joining;
        }

        void display() {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Salary: " << salary << endl;
            cout << "Date of Joining: " << date_of_joining << endl;
        }
};

int main() {
    Employee employees[5] = {
        Employee("John Doe", 1, 50000.0f, "01/01/2020"),
        Employee("Jane Doe", 2, 60000.0f, "02/01/2020"),
        Employee("Bob Smith", 3, 70000.0f, "03/01/2020"),
        Employee("Alice Johnson", 4, 80000.0f, "04/01/2020"),
        Employee("Mike Brown", 5, 90000.0f, "05/01/2020")
    };

    for (int i = 0; i < 5; i++) {
        employees[i].display();
    }

    return 0;
}


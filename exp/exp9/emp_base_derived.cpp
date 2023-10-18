#include <iostream>
using namespace std;

class Employee {
protected:
    float basic;

public:
    Employee(float b) : basic(b) {}

    virtual float calculateSalary() {
        return basic;
    }
};

class BonusEmployee : public Employee {
public:
    BonusEmployee(float b) : Employee(b) {}

    float calculateSalary() override {
        float bonusPercentage = (basic < 25000) ? 0.10f : 0.15f;
        float bonus = basic * bonusPercentage;
        return basic + bonus;
    }
};

int main() {
    float basicSalary;

    cout << "Enter the basic salary: ";
    cin >> basicSalary;

    Employee emp(basicSalary);
    BonusEmployee bonusEmp(basicSalary);

    cout << "Salary without bonus: " << emp.calculateSalary() << endl;
    cout << "Salary with bonus: " << bonusEmp.calculateSalary() << endl;

    return 0;
}


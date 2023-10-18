#include <iostream>
using namespace std;

class RBI {
protected:
    string customerName;
    long int accountNumber;
    double accountBalance;
    double minInterestRate;

public:
    RBI(const string& name, long int accNum, double balance, double interestRate)
        : customerName(name), accountNumber(accNum), accountBalance(balance), minInterestRate(interestRate) {}

    virtual void displayAccountInfo() {
        cout << "Customer Name: " << customerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: Rs. " << accountBalance << endl;
        cout << "Minimum Interest Rate: " << minInterestRate << "%" << endl;
    }

    virtual void applyInterest() {
        
        double interest = accountBalance * (minInterestRate / 100);
        accountBalance += interest;
        cout << "Interest applied: Rs. " << interest << endl;
    }
};

class SBI : public RBI {
public:
    SBI(const string& name, long int accNum, double balance)
        : RBI(name, accNum, balance, 4.0) {}  

    void displayAccountInfo() override {
        cout << "SBI Account Information:" << endl;
        RBI::displayAccountInfo();  
    }
};

class ICICI : public RBI {
public:
    ICICI(const string& name, long int accNum, double balance)
        : RBI(name, accNum, balance, 4.0) {}  

    void displayAccountInfo() override {
        cout << "ICICI Account Information:" << endl;
        RBI::displayAccountInfo();  
    }
};

class AXIS : public RBI {
public:
    AXIS(const string& name, long int accNum, double balance)
        : RBI(name, accNum, balance, 4.0) {}  

    void displayAccountInfo() override {
        cout << "AXIS Account Information:" << endl;
        RBI::displayAccountInfo();  
    }
};

int main() {
    SBI sbiAccount("Rohit Mandal", 1321354645, 1000000.0);
    ICICI iciciAccount("aditya jain", 9876543210, 1500.0);
    AXIS axisAccount("nishant", 5432109876, 200000.0);

    sbiAccount.displayAccountInfo();
    sbiAccount.applyInterest();
    cout<<"\n";

    iciciAccount.displayAccountInfo();
    iciciAccount.applyInterest();
    cout<<"\n";

    axisAccount.displayAccountInfo();
    axisAccount.applyInterest();

    return 0;
}


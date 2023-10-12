//All the banks operating in India are controlled by RBI.RBI has set guidelines which all banks
//must follow for example-RBI has set minimum interest rate applicable to saving bank account to
//4% equally. Write a program to implement bank functionality create class namely customer
//account RBI as base classes and few derived classes as SBI,ICICI,AXIS.Asssume and
//implement required member variables and functions in each class.
#include<iostream>
#include<string.h>
using namespace std;
class RBI {
    private:
        int min_interest_rate; 
        int min_balance; 
    
    public:
        RBI() {
            min_interest_rate = 4;
            min_balance = 1000;
        }
        
        int get_min_interest_rate() {
            return min_interest_rate;
        }
        
        int get_min_balance() {
            return min_balance;
        }
};

class CustomerAccount : public RBI {
    private:
        int acno; 
        char name[50];
        char type; 
        int balance; 
    
    public:
        CustomerAccount(int acc_no, char *acc_name, char acc_type, int bal) {
            acno = acc_no;
            strcpy(name, acc_name);
            type = acc_type;
            balance = bal;
        }
        
        void deposit(int amount) {
            balance += amount;
            cout << "Deposited " << amount << " rupees to " << name << "'s account.\n";
        }
        
        void withdraw(int amount) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawn " << amount << " rupees from " << name << "'s account.\n";
            }
            else {
                cout << "Insufficient balance in " << name << "'s account.\n";
            }
        }
        
        void display() {
            cout << "Account number: " << acno << "\n";
            cout << "Account holder name: " << name << "\n";
            cout << "Account type: " << type << "\n";
            cout << "Account balance: " << balance << "\n";
            cout << "Minimum interest rate: " << get_min_interest_rate() << "%\n";
            cout << "Minimum balance: " << get_min_balance() << " rupees\n";
        }
};


//9)a)//multilevel inheritance
//wap to demostrate multilevel inheritance in which class university intialise university name and
//city the derived class from university college gives the details about the college affiliated to the
//university the next derived class from college student give the information about the total
//number of student in the college

#include <iostream>
using namespace std;


class University {
  protected:
    string name; 
    string city; 
  public:
    University(string n, string c) {
      name = n;
      city = c;
    }
    void display() {
      cout << "University name: " << name << endl;
      cout << "University city: " << city << endl;
    }
};

class College : public University {
  protected:
    string cname; 
    int code; 
  public:
    College(string n, string c, string cn, int cd) : University(n, c) {
      cname = cn;
      code = cd;
    }
    void display() {
      University::display(); 
      cout << "College name: " << cname << endl;
      cout << "College code: " << code << endl;
    }
};

class Student : public College {
  private:
    int total; 
  public:
    Student(string n, string c, string cn, int cd, int t) : College(n, c, cn, cd) {
      total = t;
    }
    void display() {
      College::display(); 
      cout << "Total number of students: " << total << endl;
    }
};

int main() {
  Student s("Deemed University", "Nagpur", "symbiosis international", 1234, 5000);
  s.display();
  return 0;
}


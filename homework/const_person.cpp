#include <iostream> 
#include <string> 
using namespace std;
class Person { 
public: 
 
 Person(const string& name, int age, const string& 
occupation) 
 : name(name), age(age), occupation(occupation) { 
 } 
 void displayDetails() const { 
 cout << "Name: " << name << endl; 
 cout << "Age: " << age << endl; 
 cout << "Occupation: " << occupation << endl; 
 cout << "-----------------------" << endl; 
 } 
private: 
 string name; 
 int age; 
 string occupation; 
};
int main() { 
 // Creating Person objects using the parameterized constructor 
 Person person1("Nishant Shukla", 30, "Software Engineer"); 
 Person person2("Vishesh Chandok", 25, "Doctor"); 
 Person person3("Sparsh Mhaske", 40, "Teacher"); 
 Person person4("Aditya Jain", 28, "Artist"); 
 Person person5("Rohit Mandal", 35, "Lawyer"); 
 Person person6("Sujal Jhunghare", 22, "Student"); 
 Person person7("Shivam Verma", 50, "Businessman"); 
 Person person8("Chintamani Chaudhary", 29, "Writer"); 
 
  cout << "Details of 8 persons:" << endl;
  person1.displayDetails();
  person2.displayDetails();
  person3.displayDetails();
  person4.displayDetails();
  person5.displayDetails();
  person6.displayDetails();
  person7.displayDetails();
  person8.displayDetails();

 return 0;
}

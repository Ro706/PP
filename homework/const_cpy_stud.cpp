#include <iostream> 
#include <string> 
class Student { 
public: 
 // Constructor to initialize student details 
 Student(int rollNumber, const std::string& name, char grade) 
 : rollNumber(rollNumber), name(name), grade(grade) { 
 } 
 // Copy constructor 
 Student(const Student& other) 
 : rollNumber(other.rollNumber), name(other.name), 
grade(other.grade) { 
 } 
 // Display student details 
 void display() const { 
 std::cout << "Roll Number: " << rollNumber << std::endl; 
 std::cout << "Name: " << name << std::endl; 
 std::cout << "Grade: " << grade << std::endl; 
 std::cout << "-----------------------" << std::endl; 
 } 
private: 
 int rollNumber; 
 std::string name; 
 char grade; 
};
int main() { 
 // Creating a student object using the constructor 
 Student student1(101, "John Doe", 'A'); 
 // Creating another student object using the copy constructor 
 Student student2 = student1; 
 // Displaying details of both students 
 std::cout << "Details of Student 1:" << std::endl; 
 student1.display(); 
 std::cout << "Details of Student 2 (Copied from Student 1):" << 
std::endl; 
 student2.display(); 
 return 0; 
} 


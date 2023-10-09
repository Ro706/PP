#include <iostream> 
#include <string> 
class Book { 
public: 
 Book(const std::string& author, const std::string& title, int year) 
 : author(author), title(title), year(year) { 
 } 
 void displayDetails() const { 
 std::cout << "Title: " << title << std::endl; 
 std::cout << "Author: " << author << std::endl; 
 std::cout << "Year: " << year << std::endl; 
 std::cout << "-----------------------" << std::endl; 
 } 
private: 
 std::string author; 
 std::string title; 
 int year; 
};
int main() { 
 Book book1("J.K. Rowling", "Harry Potter and the Sorcerer's Stone", 
1997); 
 Book book2("George Orwell", "1984", 1949); 
 Book book3("Markus Zusak", "The Book Thief", 2005); 
 Book book4("Jane Austen", "Pride and Prejudice", 1813); 
 Book book5("Harper Lee", "To Kill a Mockingbird", 1960); 
 // Displaying details of each book 
 std::cout << "Details of Book 1:" << std::endl; 
 book1.displayDetails(); 
 std::cout << "Details of Book 2:" << std::endl; 
 book2.displayDetails(); 
 std::cout << "Details of Book 3:" << std::endl; 
 book3.displayDetails(); 
 std::cout << "Details of Book 4:" << std::endl; 
 book4.displayDetails(); 
 std::cout << "Details of Book 5:" << std::endl; 
 book5.displayDetails(); 
 return 0; 
}

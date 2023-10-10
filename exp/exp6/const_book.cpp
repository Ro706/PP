//create a class book with the following attrabitued title author year implement
//a para const that take value of all attrabuteand initial accortingly .display the detail of 5 books using the const.
#include<iostream>
using namespace std;
class book{
	private:
		string author;
		string title;
		int year;
	public :
		book(const string & author,const string title,int year):author(author),title(title),year(year){}
		void displayDetail()const{
				cout <<"Title :"<<title<<endl;
				cout <<"author :"<<author<<endl;
				cout <<"year :"<<year<<endl;
				cout <<"-------------------------------"<<endl;
			}
	
};
int main()
{
        book book1("J.K.brownling","Harry Potter_1",1997);
	book book2("J.K.brownling","Harry Potter_2",2000);
	book book3("J.K.brownling","Harry Potter_3",2003);
	book book4("J.K.brownling","Harry Potter_4",2006);
	book book5("J.K.brownling","Harry Potter_5",2008);
	cout <<"Detail of book : "<<endl;
	book1.displayDetail();
	book2.displayDetail();
	book3.displayDetail();
	book4.displayDetail();
	book5.displayDetail();
}


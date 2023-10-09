//create a class book with the following attrabitued title author year implement
//a para const that take value of all attrabuteand initial accortingly .display the detail of 5 books using the const.
class book{
	public :
	  int year[5];
	  string author[5],title[5];
	public :
          book(int y,string t,string a){
		  year = y;
		  author = a;
		  title = t;
	  }
	  display(){
		  cout <<"year: "<<year<<" author:"<<author<<" title:"<<title;
	  }
};
int main()
{
	int y,a,t;
	cin >> y >> a>>t;
	for (int i =0;i<5;i++){
		book b[i](

#include <iostream>
#include <string>
using namespace std;
int checkout(int a){
	int correctans[10]={1,2,1,4,3,4,2,1,4,3};
	static int count = 0;
	int check , flag=0;
	check = correctans[count];
	count++;
	if (a == check)
	       flag=1;	
	switch (flag){
		case 1:
			cout<<"Correct answer (^-^)"<<endl;
		        return 1;
			break;
		default:
		     	cout<<"Sorry ....";
			return 0;
			break;
	}
}
int main() {
  int sum = 0;
  int num;
  string Question[] ={
  "1)What is 2 + 2=?",//4
  "2)What is two zero two four ?",//0044
  "3)Who is PM of India?",//Narendra Modi
  "4)Who is nikola tasla?",//inventor and engineer
  "5)How may color in rainbow",//7
  "6)Who is a founder of MBA chai wala",//Prafull Billore
  "7)Who invented zero?",//Aryabhatta
  "8)What is 'm' in E=mc^2 ?",//mass
  "9)What is a capital of india?",//Delhi
  "10)Who is present ceo of ISRO?"//Kailasavadivoo Sivan
  };  

  string Answers[]{
  "4","22","2","10",
  "2044","0044","2024","0024",
  "Narendra modi","Atal Bihari Vajpayee","Murli Manohar Joshi","Rajnath Singh",
  "chemist","physicsist","mathematicians","inventor and engineer",
  "5","6","7","9",
  "Ritesh Agarwal","Vijay Shekhar Sharma","Peyush Bansal","Prafull Billore",
  "Radhanath Sikdar","Aryabhatta","Chandra Chakravarti","Ramanujan",
  "Mass","Meter","Momentum","Motion",
  "Ranchi","Guwahati","Kota","Delhi",
  "Satish Dhawan","S Somnath","Kailasavadivoo Sivan","Dr.purohit"
  };
   
  int checker;
  for (int i=0;i<10;i++){
	static int a = 0;
	cout <<endl;
	cout << Question[i]<<endl;
	cout <<"1)" << Answers[a] <<" 2)"<<Answers[a+1]<<endl;
	cout <<"3)" << Answers[a+2] <<" 4)"<<Answers[a+3]<<endl;
	a+=4;
	cout <<"Enter here :";
	cin >> num;
	checker = checkout(num);
	if (checker == 1){
			sum +=1000000;
		        cout << "your amount is :"<<sum<<endl;
	}else{	cout << "&& congratulations you won :"<<sum;
	       return 0;	
	}
	cout << "congratulations you won :"<<sum<<endl;
 	
  }
}

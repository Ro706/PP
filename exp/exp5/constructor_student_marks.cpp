/*Create a contructor student . Calculate total marks of student in 5 subjects and then find the student with least total marks */

#include <iostream>
#include <conio.h>
using namespace std;

class Student
{

public:
    float marks, total = 0;
    Student()
    {       
        cout << "For Student => " << endl;
            for (int j = 0; j < 5; j++)
            {   
                cout << "Enter Marks for Sub" << j + 1 << " :";
                cin >> marks;
                total = total + marks;
            }
            cout << endl;
    }
};
int main()
{
    Student s1[5];
    int num;
    float low = s1[0].total;
    for(int k =0; k<5; k++){
        
        if(low > s1[k].total){
            low = s1[k].total;
            num = k;
        }
    }
    cout<<"Lowest Marks is of Student "<<num+1<<" = "<<low;
    return 0;
}

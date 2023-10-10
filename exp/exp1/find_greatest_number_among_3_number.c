//WAP in c to find the greatest number among the 3 number given as input from the user
#include<stdio.h>
int main(){
	int num1,num2,num3,greatest_number;
	printf("Enter 3 number :");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1 > num2 && num1 > num3)
		greatest_number = num1;
	else if (num2 > num1 && num2 > num3)
		greatest_number = num2;
	else
		greatest_number = num3;
	printf("The greatest number among the 3 number(num1:%d,num2:%d,num3:%d) given as input from the user is %d",num1,num2,num3,greatest_number);
	return 0;
}

//WAP a program to print factorial given number.
#include<stdio.h>
int main(){
	int factorial=1,range;
	printf("Enter a number:");
	scanf("%d",&range);
	int i = 2;
	while (i <= range){
		factorial *= i++;
	}
	printf("Factorial is %d",factorial);
	return 0;
}

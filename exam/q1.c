#include<stdio.h>
int main(){
	float eng,maths,chem,phy,comp;
	printf("Enter a marks for english maths chem phy and comp :");
	scanf("%f %f %f %f %f",&eng,&maths,&chem,&phy,&comp);
	printf("-------------------------------------------");
	printf("You score in exam:\n");
	printf("English :%f\n",eng);
	printf("Maths :%f\n",maths);
	printf("Chem :%f\n",chem);
	printf("Physics :%f\n",phy);
	printf("Computer :%f\n",comp);
	printf("total marks :%f",eng+maths+chem+phy+comp);
	return 0;
}

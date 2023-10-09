#include<stdio.h>
int main(){
 	int a,b,c;
 	printf("Enter a 3 number:");
 	scanf("%d %d %d",&a,&b,&c);
 	if (a >= b && a >= c )
		printf("%d is a greatest number",a);
	if (b >= a && b >= c)
		printf("%d is a greatest number",b);
 	if (c >= a && c >= b)
		printf("%d is a greatest number",c);
	return 0 ;
}

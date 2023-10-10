//   *
//  * *
// * * *
//  * *
//   *
#include<stdio.h>
int main(){
	int i,j,s;
	for(i=1;i<=3;i++){
		for (s = 0 ;s < (3-i);s++){
		       printf(" ");
		}
 		for (j = 0;j<i;j++){
			printf("* ");
		}
		printf("\n");
	}
	for (i = 0 ;i<=2;i++){
		for(s =-1;s<=i;s++){
			printf(" ");
		}
		for(j=0;j<(2-i);j++){
		        printf("* ");
		}
	printf("\n");
	}
}	

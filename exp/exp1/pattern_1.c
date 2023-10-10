//1
//1 2
//1 2 3
#include<stdio.h>
int main(){
	int row = 3,col = 3;
	for(int i = 1;i <= row;i++){
		for(int j = 1;j <= i;j++){
 			printf("%d ",j);
		}
		printf("\n");
	}
	return 0 ;
}

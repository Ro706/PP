//a
//a b
//a b c
#include<stdio.h>
int main(){
	int row = 'c';
	for (int i = 'a';i <= row;i++){
		for(int j = 'a';j<=i;j++){
			printf("%c ",j);
		}
		printf("\n");
	}
	return 0;

}

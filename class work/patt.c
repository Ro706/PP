#include<stdio.h>
int main(){
    int i,s,j;
    for (int i =1;i<3;i++){
        for(int s=0;s<(3-i);s++){
            printf(" ");
        }
        for(int j= 0;j<i;i++){
            printf("* ");
        }
    }
    for (int i =0;i<=2;i++){
        for(int s=-1;s<i;s++){
            printf(" ");
        }
        for(int j= 0;j<(2-i);j++){
            printf("* ");
        }
    }
}
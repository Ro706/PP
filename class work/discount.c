#include<stdio.h>
int user(){
	int items,bill=0;
	printf("1) laptop: 4000,2)tv:5000,3)watch:1000\n");
	printf("how many items you want to add");
        int n;
        scanf("%d",&n);	
	for (int i=0;i<n;i++){
	printf("Enter a item code:");
	scanf("%d",&items);
	if (items == 1)
		bill+= 4000;
	else if (items == 2)
		bill+= 5000;
	else if (items == 3)
	        bill+= 1000;
	}
	return bill;

}

int main(){
	float bill,discount=0;
        bill=user();
	printf("bill %f",bill);
	if (bill >5000)
		discount=bill-(bill*0.1);
        else if (bill >4000)
		discount=bill-(bill*0.07);
        else
		discount=bill;
	printf("Total billing amount is :%2.f",discount);
}

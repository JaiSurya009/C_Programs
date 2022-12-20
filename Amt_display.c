#include<stdio.h>
void main(){
	int pin = 2525;
	int a;
	int amt = 10000;
	printf("Enter Pin: ");
	scanf("%d",&a);
	if(a==pin){
		printf("\n Valid Pin");
		printf("\n Amount is: %d",amt);
	}
	else{
		printf("\n Invalid Pin");
	}
}


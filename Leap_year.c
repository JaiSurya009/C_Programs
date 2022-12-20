#include<stdio.h>
void main(){
	int a;
	printf("Enter the year: ");
	scanf("%d",&a);
	if((a%4==0) && ((a%400==0) || (a%100!=0))){
		printf("It is a Leap year %d",a);
	}
	else{
		printf("It is Not a Leap year %d",a);	
	}
}

#include<stdio.h>
void main(){
	int a,y;
	int b = 0;
	printf("\n Enter number to be reversed: ");
	scanf("%d",&a);
	y = a;
	while(y>0){
		b = b*10;
		b = b+y%10;
		y = y/10;
	}
	if (b == a){
		printf("\n Number is Palindrome");
	}
	else{
		printf("\n Not a Palindrome");
	}
}

#include<stdio.h>
void main(){
	int a,y;
	int b = 0;
	printf("Enter number to be reversed: ");
	scanf("%d",&a);
	y = a;
	while(y>0){
		b = b*10;
		b = b+y%10;
		y = y/10;
	}
	printf("%d",b);	
//	printf("%d",y);	
//	printf("%d",a);	

}

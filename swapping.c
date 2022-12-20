#include<stdio.h>
void main(){
	int a= 10,b=11;
	int y;
	// using third variable
	printf("\n Before Swapping %d %d",a,b);
	y = a;
	a = b;	
	b = y;
	printf("\n After Swapping %d %d",a,b);
	
	// without using a third variable
	int c=20,d=15;
	printf("\n\n Before Swapping %d %d",c,d);
	d = c+d;
	c = d-c;
	d = d-c;
	printf("\n After Swapping %d %d",c,d);
}

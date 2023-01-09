#include<stdio.h>
void main(){
	int a= 10,b=11;
	int y;
	// using third variable
	printf("\n Before Swapping %d %d",a,b);
	y = a;
	a = b;	
	b = y;
	printf("\n After Swapping %d %d\n",a,b);
	
	// without using a third variable
	int c=20,d=15,e=40,f=50;
	printf("\n Without using a third variable");
	printf("\n Before Swapping %d %d",c,d);
	d = c+d;
	c = d-c;
	d = d-c;
	printf("\n After Swapping %d %d",c,d);
	
	// using pointers
	// *variable will give the value and just pointer variable will give address
	int *temp,*tem,*abc;
	temp = &e;
	tem = &f;
	printf("\n\n Using Pointers");
	printf("\n Before Swapping %d %d",*temp,*tem);
	abc = temp;
	temp = tem;
	tem = abc;
	printf("\n After Swapping %d %d",*temp,*tem);
	
}

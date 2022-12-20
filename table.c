#include<stdio.h>
void main(){
	int a;
	printf("Enter Number for its table: ");
	scanf("%d",&a);
	int count;
	int i=1;
	do{
//		printf("\n %d",a);
//		printf(" * %d",i);
//		printf(" = %d",a*i);
		printf("\n %d * %d = %d ",a,i,a*i);
		i++,count++;
	}
	while(count<10);
}

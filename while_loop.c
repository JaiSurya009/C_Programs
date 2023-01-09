#include<stdio.h>
void main(){
	int a=10;
	int b=10;
	int c=10;
	printf("\n Numbers are: ");
	while(a>0){
		printf("%d ",a);
		a--;
	}
  
	printf("\n Even Numbers are: ");
	while(b>0){
		
		if(b%2==0){
			printf("%d ",b);
		}
		b--;
	}
	printf("\n Odd Numbers are: ");
	while(c>0){
		if(c%2!=0){
			printf("%d ",c);
		}
		c--;
	}
}

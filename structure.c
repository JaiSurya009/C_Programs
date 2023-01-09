#include<stdio.h>
#include<string.h>
struct A{
	int a;  
	char b;	
	float k;
};
void main(){
	struct A s;
	s.a = 1043;
	s.b = 'J';
	s.k = 9.36;
	
	printf("%d \t",s.a);	
	printf("%c \t",s.b);	
	printf("%f",s.k);
	
//	printf("\nEnter number: ");
//	scanf("%d",&s.a);
//	printf("\nEnter char: ");
//	gets(s.b);
//	printf("\nEnter float: ");
//	scanf("%f",&s.k);
//
//	printf("\n%d",s.a);
//	puts(s.b);
//	printf("\n%f",s.k);
}


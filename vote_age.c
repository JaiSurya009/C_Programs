#include<stdio.h>
void main(){
	int a;
	printf("Give a valid Age to check:");
	scanf("%d",&a);
	if (a>=18){
		printf("Valid Age to Vote");
	}
	else{
		printf("Not Valid");
	}
}

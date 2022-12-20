#include<stdio.h>
void main(){
	int a,b,c,d,e;
	printf("\n Enter Mark of first subject: ");
	scanf("%d",&a);
	printf("\n Enter Mark of second subject: ");
	scanf("%d",&b);	
	printf("\n Enter Mark of third subject: ");
	scanf("%d",&c);	
	printf("\n Enter Mark of fourth subject: ");
	scanf("%d",&d);	
	printf("\n Enter Mark of fifth subject: ");
	scanf("%d",&e);
	int total = a+b+c+d+e;
	float avg = total/5;
	if (avg>=90){
		printf("\n Grade is Distinction");
	}
	else if (avg>=80){
		printf("\n Grade is First Class");
	}
	else if (avg>=70){
		printf("\n Grade is Second Class");
	}	
	else if (avg>=60){
		printf("\n Grade is Third Class");
	}
	else if (avg>=50){
		printf("\n Grade is Normal Class");
	}
	else{
		printf("\n Failed");
	}	
}

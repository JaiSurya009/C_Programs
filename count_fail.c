#include<stdio.h>
void main(){
	int a,b,c,d,e;
	int count = 0;
	printf("\n Enter Mark of first subject: ");
	scanf("%d",&a);
	if(a<40){
		count +=1;
	}
	printf("\n Enter Mark of second subject: ");
	scanf("%d",&b);	
	if(b<40){
		count +=1;
	}
	printf("\n Enter Mark of third subject: ");
	scanf("%d",&c);	
	if(c<40){
		count +=1;
	}
	printf("\n Enter Mark of fourth subject: ");
	scanf("%d",&d);	
	if(d<40){
		count +=1;
	}
	printf("\n Enter Mark of fifth subject: ");
	scanf("%d",&e);
	if(e<40){
		count +=1;
	}
	int total = a+b+c+d+e;
	float avg = total/5;
//	printf("\n Name: Jai Surya");
//	printf("\n Roll no: 1047");
//	printf("\n Total is: %d",total);
//	printf("\n Average is: %f",avg);
//	if (avg>=90){
//		printf("\n Grade is Distinction");
//	}
//	else if (avg>=80){
//		printf("\n Grade is First Class");
//	}
//	else if (avg>=70){
//		printf("\n Grade is Second Class");
//	}	
//	else if (avg>=60){
//		printf("\n Grade is Third Class");
//	}
//	else if (avg>=50){
//		printf("\n Grade is Normal Class");
//	}
//	else{
//		printf("\n Failed");
//	}	
	printf("\n No.of Failed subjects: %d",count);
}

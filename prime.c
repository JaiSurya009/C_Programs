#include<stdio.h>
void main(){
	int a,count,i;
	printf("Enter number to be checked: ");
	scanf("%d",&a);
	for(i=2;i<a;i++){
		if(a%i==0){
			count+=1;
			printf("Number is not Prime");
			break;
		}
		else{
			continue;
		}
	}
	if(count==0){
		printf("Number is Prime");
	}	
}

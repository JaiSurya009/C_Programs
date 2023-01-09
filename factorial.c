#include<stdio.h>
void main(){
	int n,f,i;
	f=1;
	printf("Enter the number for Factorial: ");
	scanf("%d",&n);
	if(n==0){
		printf("0");
	}
	else if(n==1){
		printf("1");
	}
	else{
		for(i=1;i<=n;i++){
			f = f*i;
		}
		printf("%d is the Factorial of %d ",f,n);
	}
}

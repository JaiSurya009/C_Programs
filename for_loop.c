#include<stdio.h>
void main(){
	
	int i,j,k;
	int count = 0;
	printf("Enter Lower-Limit: ");
	scanf("%d",&i);
	printf("Enter Upper-Limit: ");
	scanf("%d",&j);
	for(k=i;k<j;k++){
		if (k%2==0){
			printf("\n Number of times Loop is run: %d ",k);
			count +=1;
		}
	}
	printf("\n Number of Even values are %d",count);

	

	
	
//	int j,i;
//	printf("Enter number of times the loop runs: ");
//	scanf("%d",&j);
//	
//	for(i=0;i<j;i++){
//		printf("\n Number is %d",i);
//	}
}

#include<stdio.h>
void main(){
	int i,k;
	printf(" Enter number of elements in the array: ");
	scanf("%d",&k);
	int m[k],n[k],c[k];
	for(i=0;i<k;i++){
		printf("\n Give the %d element of array: ",i);
		scanf("%d",&m[i]);
	}
	printf("\n Now enter the second array elements \n ");
	for(i=0;i<k;i++){
		printf("\n Give the %d element of second array: ",i);
		scanf("%d",&n[i]);
	}
	printf("\n Displaying the 3rd Array with sum of two different arrays \n");
	for(i=0;i<k;i++){
		c[i]=n[i]+m[i];
		printf(" %d",c[i]);
	}
}

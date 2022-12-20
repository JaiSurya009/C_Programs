#include<stdio.h>
void main(){
	int i;
	int k,j;
	int total=0;
	printf(" Enter number of elements in the array: ");
	scanf("%d",&k);
	int m[k];
	for(j=0;j<k;j++){
		printf("\n Give the %d element of array: ",j);
		scanf("%d",&m[j]);
	}
	printf("\n Printing values in a left to right manner\n");
	int length = sizeof(m)/sizeof(m[0]);
	for(i=0;i<length;i++){
		printf(" %d ",m[i]);
		total += m[i];
	}
	printf("\n Printing values in a right to left manner\n");
	for(i=length-1;i>=0;i--){
		printf(" %d ",m[i]);
	}
	printf("\n Total sum of the elements in the array is %d",total);
	printf("\n Average is %d",total/k);
	
}

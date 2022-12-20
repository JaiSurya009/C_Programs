#include<stdio.h>
void main(){
	int i,k,j,temp;
	printf(" Enter number of elements in the array: ");
	scanf("%d",&k);
	int m[k];
	int length = sizeof(m)/sizeof(m[0]);
	
	for(j=0;j<k;j++){
		printf("\n Give the %d element of array: ",j);
		scanf("%d",&m[j]);
	}
	printf("\n Printing values in a given manner\n");
	for(i=0;i<length;i++){
		printf(" %d ",m[i]);
	}
	printf("\n Printing elements in a (Ascending)Sorted Manner: \n");
	for(i=0;i<length-1;i++){
		for(j=1;j<length;j++){
			if(m[i]>m[j]){
				temp=m[i];
				m[i]=m[j];
				m[j]=temp;
			}
		}
	}
	for(i=0;i<length;i++){
		printf(" %d ",m[i]);
	}
	printf("\n Printing elements in a (Descending)Sorted Manner: \n");
	for(i=length-1;i>=0;i--){
		printf(" %d ",m[i]);
	}
}

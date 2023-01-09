#include<stdio.h>

void main(){
	char c[5];
	int i;
	printf("Enter the String: ");	
	scanf("%[^\n]s",c);
	printf(c);	
	int length = sizeof(c)/sizeof(c[0]);
	printf("\nString in reverse:\n");
	for(i=length-1;i>=0;i--){
		printf("%c ",c[i]);
	}
}

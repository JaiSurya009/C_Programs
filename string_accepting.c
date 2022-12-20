#include<stdio.h>

void main(){
	char c[5];
	printf("Enter the String: ");
	
//	scanf("%[^\n]%*c",c);
//	printf(c);

//	gets(c);
//	printf(c);

//	fgets(c,5,stdin);
//	printf("%s",c);	
	
	scanf("%[^\n]s",c);
	printf(c);	
}

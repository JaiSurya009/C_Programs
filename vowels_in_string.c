#include<stdio.h>
void main(){
	char c[20];
	int i;
	int count=0;
	printf("Enter the String:");
	scanf("%[^\n]%*c",c);
	int length = sizeof(c)/sizeof(c[0]);
	for(i=0;i<length;i++){
		if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u'){
			count = count+1;
		}
	}
	/* */
	printf("The number of vowels are: %d",count);
}

#include<stdio.h>
void main(){
	int i,j,r,k=0;
	r = 3;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(2*i-1);k++)
		{
			printf("*");
		}
	printf("\n");
	}
	for(i=r;i>1;i--)
	{
		for(j=r-1;j>1;j--)
		{
			printf(" ");
		}
		for(k=(2*i-1);k>1;k--)
		{
			printf("*");
		}
	printf("\n");
	}
}

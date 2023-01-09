 #include<stdio.h>
void main(){
	int a,b,i,j;
	printf(" Enter the number of Rows and Columns: ");
	scanf("%d %d",&a,&b);
	int array[a][b];
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\n Enter the element at position %d,%d: ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("\n The Diagnol Elements are: ");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(i==j){
				printf("%d ",array[i][j]);
			}
		}
	}
}

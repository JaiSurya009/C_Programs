#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=3;i++){
		for(j=3;j>0;j--){
			printf("\n %d %d",i,j);
			if(i>j){
				continue;
			}
		}
	}
	return 0;
}

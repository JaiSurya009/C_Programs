#include<stdio.h>
void main(){
	int i;
// will break if 10 appears in the loop and won't run if even number appears if the number is 9 then the jump statements will execute
	for(i=1;i<10;i++){
		if(i==10){
			break;
		}
		else if(i%2==0){
			continue;
		}
		else if(i==9){
			goto jump;
		}
		else{
			printf("\n %d",i);
		}
	}
	jump:
		printf("\n Jump Statement is executed due to Goto");
}

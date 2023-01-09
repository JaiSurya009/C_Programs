#include<stdio.h>
void add();  // declaration
int sub(int a,int b);   // with parameters
int multi(int a,int b);
void main(){
	int a,b;
	a=10,b=20;
	add();                      // calling
	printf("%d",multi(a,b));    // printing the returning value
}
void add(){  					// definition
	int a,b;
	a=10,b=20;
	printf("Addition Function is Executed: ");
	printf("%d",a+b);
	int result = sub(a,b);
	printf("%d",result);        //printing the variable which is assigned the value of return
}
int sub(int a,int b){   // function with parameters
	printf("\nSubtraction Function is Executed: ");
	return a-b;
}
int multi(int a,int b){   //with int return type
	printf("\nMultiplication Function is Executed: ");
	return a*b;
}


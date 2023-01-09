#include<stdio.h>
void first();
int second();
void third(char b[]);
int four(int c);
void main(){
	/*
	1. Function without arugments and without return type
	2. Function without arugments and with return type
	3. Function with arugments and without return type
	4. Function with arugments and with return type
	*/
	first();
	printf("%d",second());
	char b[] = "Function with arugments and without return type";
	third(b);
	char c[] = "Function with arugments and with return type";
	printf("%d",four(c));
}
void first(){
	printf(" Function without arugments and without return type\n");
}
int second(){
	int a=1;
	return a;
}
void third(char b[]){
	printf("%c",b);
}
int four(int c){
	// c = "Function with arugments and with return type";
	return c;
}

//char four(char c[]){
//	// c = "Function with arugments and with return type";
//	return c[];
//}



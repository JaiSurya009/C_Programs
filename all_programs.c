#include<stdio.h>
int account(int p); 			//1
void array();   				//2
void array_sort();  			//3
void array_sum();				//4	
void avg_marks();				//5	
void diagnols_of_array();		//6
void even_odd();				//7
void leap_year();				//8
void operators();				//9
void palindrome();				//10
void prime();					//11
void number_reverse();			//12
void string_reverse();			//13
void swapping_numbers();		//14
void table();					//15
void age_valid();				//16
void vowels();					//17
void factorial();				//18
void pointer();					//19

void main(){
	int a;
	printf("Enter number to run its respective program: ");
	scanf("%d",&a);
	if(a==1){
		int p;
		printf("Enter Pin: ");
		scanf("%d",&p);
		account(p);		
	}
	else if(a==2){
		array();
	}
	else if(a==3){
		array_sort();
	}
	else if(a==4){
		array_sum();
	}
	else if(a==5){
		avg_marks();
	}
	else if(a==6){
		diagnols_of_array();
	}
	else if(a==7){
		even_odd();
	}
	else if(a==8){
		leap_year();
	}
	else if(a==9){
		operators();
	}
	else if(a==10){
		palindrome();
	}
	else if(a==11){
		prime();
	}
	else if(a==12){
		number_reverse();
	}
	else if(a==13){
		string_reverse();
	}
	else if(a==14){
		swapping_numbers();
	}
	else if(a==15){
		table();
	}
	else if(a==16){
		age_valid();
	}
	else if(a==17){
		vowels();
	}
	else if(a==18){
		factorial();
	}
	else if(a==19){
		pointer();
	}
	else{
		printf("Enter a valid number");
	}
}
int account(int p){
	int pin = 2525;
	if(p==pin){
		printf("\n Valid Pin");
		printf("\n Amount is: %d",10000);
	}
	else{
		printf("\n Invalid Pin");
	}
}

void array(){
	int i,k,j;
	int total=0;
	printf(" Enter number of elements in the array: ");
	scanf("%d",&k);
	int m[k];
	for(j=0;j<k;j++){
		printf("\n Give the %d element of array: ",j);
		scanf("%d",&m[j]);
	}
	printf("\n Printing values in a left to right manner\n");
	int length = sizeof(m)/sizeof(m[0]);
	for(i=0;i<length;i++){
		printf(" %d ",m[i]);
		total += m[i];
	}
}

void array_sort(){
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
}

void array_sum(){
	int i,k;
	printf(" Enter number of elements in the array: ");
	scanf("%d",&k);
	int m[k],n[k],c[k];
	for(i=0;i<k;i++){
		printf("\n Give the %d element of array: ",i);
		scanf("%d",&m[i]);
	}
	printf("\n Now enter the second array elements \n ");
	for(i=0;i<k;i++){
		printf("\n Give the %d element of second array: ",i);
		scanf("%d",&n[i]);
	}
	printf("\n Displaying the 3rd Array with sum of two different arrays \n");
	for(i=0;i<k;i++){
		c[i]=n[i]+m[i];
		printf(" %d",c[i]);
	}
}

void avg_marks(){
	int a,b,c,d,e;
	printf("\n Enter Mark of first subject: ");
	scanf("%d",&a);
	printf("\n Enter Mark of second subject: ");
	scanf("%d",&b);	
	printf("\n Enter Mark of third subject: ");
	scanf("%d",&c);	
	printf("\n Enter Mark of fourth subject: ");
	scanf("%d",&d);	
	printf("\n Enter Mark of fifth subject: ");
	scanf("%d",&e);
	int total = a+b+c+d+e;
	float avg = total/5;
	printf("\n Name: Jai Surya");
	printf("\n Roll no: 1047");
	printf("\n Total is: %d",total);
	printf("\n Average is: %f",avg);
	if (avg>=90){
		printf("\n Grade is Distinction");
	}
	else if (avg>=80){
		printf("\n Grade is First Class");
	}
	else if (avg>=70){
		printf("\n Grade is Second Class");
	}	
	else if (avg>=60){
		printf("\n Grade is Third Class");
	}
	else if (avg>=50){
		printf("\n Grade is Normal Class");
	}
	else{
		printf("\n Failed");
	}
}

void diagnols_of_array(){
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

void even_odd(){
	int a;
	printf("Enter the number to be checked: ");
	scanf("%d",&a);
	if (a%2==0){
		printf("Number is Even");
	}
	else{
		printf("Number is Odd");
	}
}

void leap_year(){
	int a;
	printf("Enter the year: ");
	scanf("%d",&a);
	if((a%4==0) && ((a%400==0) || (a%100!=0))){
		printf("It is a Leap year %d",a);
	}
	else{
		printf("It is Not a Leap year %d",a);	
	}
}

void operators(){
	int a = 10 , b = 20;
	printf("\n Addition is: %d ", a+b);
	printf("\n Subtraction is : %d ", a-b );
	printf("\n Multiplication is: %d ", a*b);
	printf("\n Divison is : %d ", b/a);
	printf("\n Reminder is: %d ", a%b);
	printf("\n Increment : %d ", a++);
	printf("\n Decrement : %d ", b--);
	printf("\n Assignment: %d ", a+=b);
	printf("\n Assignment: %d ", a*=b);
	printf("\n Assignment: %d ", a-=b);
} 

void palindrome(){
	int a,y;
	int b = 0;
	printf("\n Enter number to be checked: ");
	scanf("%d",&a);
	y = a;
	while(y>0){
		b = b*10;
		b = b+y%10;
		y = y/10;
	}
	if (b == a){
		printf("\n Number is Palindrome");
	}
	else{
		printf("\n Not a Palindrome");
	}
}

void prime(){
	int a,count,i;
	printf("Enter number to be checked: ");
	scanf("%d",&a);
	for(i=2;i<a;i++){
		if(a%i==0){
			count+=1;
			printf("Number is not Prime");
			break;
		}
		else{
			continue;
		}
	}
	if(count==0){
		printf("Number is Prime");
	}
}

void number_reverse(){
	int a,y;
	int b = 0;
	printf("Enter number to be reversed: ");
	scanf("%d",&a);
	y = a;
	while(y>0){
		b = b*10;
		b = b+y%10;
		y = y/10;
	}
	printf("%d",b);	
}

void string_reverse(){
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

void swapping_numbers(){
	int a= 10,b=11;
	int y;
	// using third variable
	printf("\n Before Swapping %d %d",a,b);
	y = a;
	a = b;	
	b = y;
	printf("\n After Swapping %d %d\n\n",a,b);
	
	// without using a third variable
	int c=20,d=15,e=40,f=50;
	printf("\n Without using a third variable");
	printf("\n Before Swapping %d %d",c,d);
	d = c+d;
	c = d-c;
	d = d-c;
	printf("\n After Swapping %d %d",c,d);
	
	// using pointers
	// *variable will give the value and just pointer variable will give address
	int *temp,*tem,*abc;
	temp = &e;
	tem = &f;
	printf("\n\n Using Pointers");
	printf("\n Before Swapping %d %d",*temp,*tem);
	abc = temp;
	temp = tem;
	tem = abc;
	printf("\n After Swapping %d %d",*temp,*tem);
}

void table(){
	int a;
	printf("Enter Number for its table: ");
	scanf("%d",&a);
	int count;
	int i=1;
	do{
//		printf("\n %d",a);
//		printf(" * %d",i);
//		printf(" = %d",a*i);
		printf("\n %d * %d = %d ",a,i,a*i);
		i++,count++;
	}
	while(count<10);
}

void age_valid(){
	int a;
	printf("Give a valid Age to check:");
	scanf("%d",&a);
	if (a>=18){
		printf("Valid Age to Vote");
	}
	else{
		printf("Not Valid");
	}
}

void vowels(){
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
	printf("The number of vowels are: %d",count);
}

void factorial(){
	int n,f,i;
	f=1;
	printf("Enter the number for Factorial: ");
	scanf("%d",&n);
	if(n==0){
		printf("0");
	}
	else if(n==1){
		printf("1");
	}
	else{
		for(i=1;i<=n;i++){
			f = f*i;
		}
		printf("%d is the Factorial of %d ",f,n);
	}
}

void pointer(){
	int a;
	printf("Give a value to get its variable's assigned address\n");
	scanf("%d",&a);
	printf("Value is %d ",&a);
}

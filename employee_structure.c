#include<stdio.h>
struct A{
	int emp_no;
	char name[20];
	int dept;
};

void main(){
	int a,u,i;
	char h[20];
	printf("\n Enter the number of employees: ");
	scanf("%d",&u);
	struct A k[u];
	for(i = 0; i <= u; i++){
		printf("\n Enter the Employee number: ");
		scanf("%d",&a);
		k[i].emp_no = a;
		printf("\n Enter the name of employees: ");
		fgets(k[i].name,20,stdin);
//		scanf("%[^\n]%*c",h);
//		k[i].name = h;
		printf("\n The Department of employees: ");
		scanf("%d",&a);
		k[i].dept = a;
	}
	
	for(i = 0; i <= u; i++){
		printf("\n The Employee number is : %d",k[i].emp_no);
		printf("\n The name of employee: %s",k[i].name);
		printf("\n The Department of employee is: %d",k[i].dept);
	}
}

//201180
//Q1

#include <stdio.h>

int addtion(int n1,int n2);

int main(){
	
	int num1, num2;
	
	printf("\nEnter Your First Number :");
	scanf("%d",&num1);
	
	printf("\nEnter Your Second Number :");
	scanf("%d",&num2);
	
	printf("\nAddition of above two numbers is : %d",addition(num1,num2));
	
	return 0;
	
	
	
}

int addition(int n1,int n2){
	
	int add;
	add = n1+n2;
	
	return add;
		
	
}

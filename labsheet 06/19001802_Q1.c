//19001802
//Q1

#include<stdio.h>

int main(){
	
	int a,b;
	
	printf("\nEnter your first number : ");
	scanf("%d",&a);
	printf("Enter your second number : ");
	scanf("%d",&b);
		
	int *p,*q,*r;
	
	p=&a;
	q=&b;
	
	//sum of the two numbers using pointers
	int	sum = *p+*q;
	
	r=&sum;
	
	printf("\nSum of the two numbers is %d",*r);
	
	
	return 0;
}

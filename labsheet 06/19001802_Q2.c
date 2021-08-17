//19001802
//Q2

#include<stdio.h>

void addition(int *p,int *q,int *t);
int main(){
	
	int a,b,sum;
	
	printf("\nEnter your first number : ");
	scanf("%d",&a);
	printf("Enter your second number : ");
	scanf("%d",&b);
	
	addition(&a,&b,&sum);
	
	printf("\nSum of two numbers is %d",sum);
	
	return 0;
}

void addition(int *p,int *q,int *t){
	
	*t = *p+*q;
	
}

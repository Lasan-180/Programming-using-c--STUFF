//19001802
//Q3

#include<stdio.h>

int main(){
	
	int a,b,*max;
	
	printf("\nEnter your first number : ");
	scanf("%d",&a);
	printf("Enter your second number : ");
	scanf("%d",&b);
	
	
	if (a>b)
		max=&a;
	else
		max=&b;
	
	printf("\nThe maximun number is %d",*max);
	
	return 0;
}

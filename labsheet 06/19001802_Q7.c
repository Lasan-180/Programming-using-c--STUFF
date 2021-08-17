//19001802
//Q7

#include<stdio.h>

void swap (int *p,int *q);
int main(){
	
	int a,b;
	
	printf("\nEnter your value for A : ");
	scanf("%d",&a);
	printf("Enter your value for B : ");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	printf ("\nAfter the swapping : ");
	printf("\n\tValue of A is : %d",a);
	printf("\n\tValue of B is : %d",b);
			
	return 0;
}

void swap (int *p,int *q){
	
	int c;
	c = *p;
	*p=*q;
	*q=c;
	
	
}

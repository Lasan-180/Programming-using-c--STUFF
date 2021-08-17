//201180
//Q6

#include <stdio.h>

int ncr(int num1,int num2);
int fac(int num3);

int main(){
	int n,r;
	
	printf("\n");
	printf("Enter value of n :");
	scanf("%d",&n);
	printf("Enter value of c :");
	scanf("%d",&r);
	
	printf("\nThe value of the operation is : %d",ncr(n,r));
	
	return 0;	
	
}

int ncr(int num1,int num2){
	
	int x,y,z;
	
	x=fac(num1);
	y=fac(num2);
	z=fac(num1-num2);
	
	return x/(y*z);	
	
}

int fac(int num3){
	
	if(num3<=1)
		return 1;
	
	return num3* fac(num3-1);	

	
}



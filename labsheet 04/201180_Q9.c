//201180
//Q9

#include <stdio.h>

int gcd(int val1,int val2);


int main(){
	

	printf("\n");
	int num1,num2;
	
	printf("\nEnter your first number :");
	scanf("%d",&num1);
	
	printf("\nEnter your second number :");
	scanf("%d",&num2);
	
	printf("\nThe power of sums between %d and %d is: %d",num1,num2,gcd(num1,num2));
	
	return 0;
	
	
}

int gcd(int val1,int val2){
	
	int sum=0;
	
	while(val1<=val2){
		sum=sum+val1*val1;
		val1=val1+1;
	
		
	}
	
	return sum;
	
}

//201180
//Q8

#include <stdio.h>

int gcd(int val1,int val2);

int main(){
	
	printf("\n");
	int num1,num2;
	
	printf("\nEnter your first number :");
	scanf("%d",&num1);
	
	printf("\nEnter your second number :");
	scanf("%d",&num2);
	
	printf("\nThe Greastest Common Number is: %d",gcd(num1,num2));
	
	return 0;
	
	
}

int gcd(int val1,int val2){
	
	int i,p;
	
	for(i=1; i<=val1 && i<=val2;i++){
		if (val1%i==0 && val2%i==0)
			p=i;
	}
	
	return p;
}

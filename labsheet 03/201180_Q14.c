//201180
//Q14

#include <stdio.h>

int main (){

	int a,b,c;
	
	printf("\nEnter value of A: ");
	scanf("%d",&a);
	printf("\nEnter value of B: ");
	scanf("%d",&b);
	printf("\nEnter value of C: ");
	scanf("%d",&c);
	
	if(a>b)
		{
			if(a>c)
				printf("\nA is the largest number");
			else
				printf("\nC is the largest number");
		}

	else 
		{
			
		if(b>c)
			printf("\nB is the largest number");
				
		else
			printf("\nC is the largest number");	
			
			
		}
		
			



	return 0;


}










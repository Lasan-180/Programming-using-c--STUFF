//201180
//Q15

#include <stdio.h>
#include <math.h>

int main(){
	
	int a,b,c;
	
	printf("\nEnter value of A: ");
	scanf("%d",&a);
	printf("\nEnter value of B: ");
	scanf("%d",&b);
	printf("\nEnter value of C: ");
	scanf("%d",&c);
	
	float disc,deno,x1,x2;
	
	disc=(b*b)-(4*a*c);
	deno=2*a;
	
	if(disc>0)
		{
			printf("\nTHE ROOTS ARE REAL ROOTS");
			x1=(-b/deno)+(sqrt(disc)/deno);
			x2=(-b/deno)-(sqrt(disc)/deno);
			printf("\n%f %f",x1,x2);
			
		}
	
	else if(disc==0)
		{
			printf("\nTHE ROOTS ARE REPEATED ROOTS");
			x1=-b/deno;
			printf("%f",x1);
		}
	
		else
			printf("ROOTS ARE IMAGINARY RROTS");
	
	
	
	return 0;
	
}

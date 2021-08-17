//201180
//Q11

#include <stdio.h>

int main (){
	
	
	float weit,hiht,ibm;
	
	printf("\nEnter your weight in kg: ");
	scanf("%f",&weit);
	printf("\nEnter your height in meter: ");
	scanf("%f",&hiht);
	
	ibm = weit/(hiht*hiht);
	
	if(ibm<18.5)
		printf("\nUnderweight");
		else if (ibm>=18.5 && ibm<25.0)
			printf("\nNormal Weight");
			else if (ibm>=25.0 && ibm<30.0)
				printf("Overweight");
				else if(ibm>=30.0)
					printf("Obesity");
				
	
	
	
	
	
	
	return 0;
}

//201180
//Q10

#include <stdio.h>

int main(){
	
	int year;
	
	printf("\nEnter the year: ");
	scanf("%d",&year);
	
	if (year%400==0|| (year%100!=0 && year%4==0))
		printf("Above year is a leap year");
		
	else
		printf("\nAbove year is not a leap year");
	
	
		
	
	return 0;
}

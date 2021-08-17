//19001802
//Q7

#include<stdio.h>

struct Date{
	int day;
	int month;
	int year;
	
};

typedef struct Date d;

int main(){
	
	d d1,d2;
	
	printf("Enter first date :");
	printf("\n\tday : ");
	scanf("%d",&d1.day);
	printf("\tmonth : ");
	scanf("%d",&d1.month);
	printf("\tyear : ");
	scanf("%d",&d1.year);
	
	printf("\nEnter second date :");
	printf("\n\tday : ");
	scanf("%d",&d2.day);
	printf("\tmonth : ");
	scanf("%d",&d2.month);
	printf("\tyear : ");
	scanf("%d",&d2.year);
	
	if(d1.year==d2.year){
		if(d1.month==d2.month){
			if(d1.day==d2.day)
				printf("\nDates are equal");
			else
				printf("\nDates are not equal");
		}
		else
		 	printf("\nDates are not equal");
	}
	else
		printf("\nDates are not equal");
	
	
	return 0;
}

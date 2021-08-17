//19001802
//Q8

#include <stdio.h>

struct Date{
	int day;
	int month;
	int year;
};

typedef struct Date d;

int main(){
	
	d curr_day;
	int x,y;
	
	printf("\nEnter current date : ");
	printf("\n\tDay :");
	scanf("%d",&curr_day.day);
	printf("\tMonth :");
	scanf("%d",&curr_day.month);
	printf("\tYear :");
	scanf("%d",&curr_day.year);
	
	curr_day.day=curr_day.day+45;
	
	if(curr_day.day>30){
		
		x=curr_day.day/30;
		y=curr_day.day%30;
		
	}
	printf("\nNew date after adding 45 days :\n");
	
	printf("%d.",curr_day.year);
	printf("%d.",curr_day.month+x);
	printf("%d",y);	
	
	return 0;
}

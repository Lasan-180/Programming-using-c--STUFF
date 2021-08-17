
//201180
//Q10

# include <stdio.h>
# include <conio.h>

int main(){

	int hour, day, month, year, minutes, nday, nyear;
	
	hour = 60;     // 1 hour has 60 minutes
	day = 24;     // 1 day has 24 hours
	month = 30;   // 1 month has 30 days(assume all moths has 30 days)
	year = 12;    // 1 year has 12 months
	
	
	printf("\nEnter number of years : ");
	scanf("%d", &nyear);
	printf("\nEnter number of days : ");
	scanf("%d", &nday);
	
	minutes = (nyear*year*month*day*hour)+(nday*day*hour);
		
	printf("\n\nAmount of minutes are : %d ", minutes);
	
	
	
	return 0;


}

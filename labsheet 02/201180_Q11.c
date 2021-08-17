
//201180
//Q11

# include <stdio.h>
# include <conio.h>

int main (){
	
	float foot, inch, nft, nin, height;
	
	foot = 12;       // 1 foot has 12 inches
	inch = 2.54;     // 1 inch has 2.54 centimeters
	
	printf("\nEnter number of feet : ");
	scanf("%f", &nft);
	printf("\nEnter number of inches : ");
	scanf("%f", &nin);
	
	height = (nft*foot*inch)+(nin*inch);
	
	printf("\n\nThe height of the person in centimeters : %fcm ",height);
	
	
	return 0;
		
	
	
}

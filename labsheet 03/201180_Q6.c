//201180
//Q6

#include <stdio.h>

int main(){
	
	float revenue,price,dis;
	int quantity;
	
	printf("\nEnter the price :");
	scanf("%f",&price);
	printf("\nEnter the quantity :");
	scanf("%d",&quantity);
	
	if(quantity>160)
		dis=0.2;
		else if(quantity>=120)
			dis=0.15;
			else if(quantity<120)
				dis=0.0;
	
	
	revenue = (price*quantity)-(price*quantity*dis);
	printf("\nThe revenue is : %f",revenue);
	
	
	return 0;

	
	
}

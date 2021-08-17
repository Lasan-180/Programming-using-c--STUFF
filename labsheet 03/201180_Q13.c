//201180
//Q13

#include <stdio.h>

int main(){
	
	int a=0;
	int b=100;
	int c=50;
	int x;		
	int count = 1;
		
	printf("\nGuess a number:");
	
	printf("\n\tIf your number is what i guess enter 1,\n\tif it is too low enter 0,\n\tif it is too high enter 2");
	printf("\n\nYour number is: %d\n",c);
	scanf("%d",&x);
	
	while(x!=1){
		
		count=count+1;
		if (x==0)
			a=c+1;
		else if (x==2)
				b=c-1;
		c=(a+b)/2;
		
		printf("\nYour number is: %d\n",c);
		scanf("%d",&x);
		
		
	}
	
	printf("\nNo of guesses are: %d",count);
	
	return 0;
}



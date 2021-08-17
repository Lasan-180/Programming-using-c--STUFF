//201180
//Q5

#include <stdio.h>
#include <stdlib.h>

int choice(int,int);

int main (){
	
	int num,x=1,rad,y;
	
	printf("\n*****Rock Paper Scissor*****");
	
	printf("\n\n 1=Rock");
	printf("\n 2=Paper");
	printf("\n 3=Scissor");
	printf("\n It you win machine will display 1 and if you lost machine will dispaly -1\n\n");
	
	while(x>0){
		
		printf("Enter your choice :");
		scanf("%d",&num);
		
		if (num>3)
			break;
		
		rad=rand() %3;
		y=choice(num,rad);
	
	}
	
	printf("\n\nThe winner is : %d",y);
	return 0;
}
	
int choice(int num1,int rad1){
	
	
	int user=0,com=0;
		
		
		if(num1 != rad1){
		
		if (num1==1 && rad1 ==2)
			com=com+1;
			else if(num1==2 && rad1==3)
						com=com+1;
						else if(num1==2 && rad1 ==1)
									user=user+1;
									else if(num1==3 && rad1 ==2)
												user=user+1;
			
		}
	
	
	
	if (user>com)
		return 1;
	else
		return -1;
	
	
}

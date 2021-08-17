//201180
//Q1 (c)

#include<stdio.h>

int main(){
	
	int i,x;
	
	for(i=0;i<6;i++){
		if(i==0 || i==5){
		
			for(x=0;x<6;x++)
				printf("* ");
			
	}
		else
			
			for(x=0;x<6;x++){
				if(x==0 || x==5 || x==i)
					printf("* ");
				else
					printf("  ");
					
			}
			printf("\n\n");
						
		

	}
	
	return 0;
}

//201180
// Q1 (d)

#include<stdio.h>

int main(){
	
	int i,x,z;
	

	for	(i=0;i<6;i++){
		if(i==0 || i==5){
			for(x=0;x<10;x++)
				printf("* ");
			
		}
	
		else 
	    
		   	for(z=0;z<10;z++){
			   	if(z>0&&z<9)
			      printf("  ");
			   	else
			 	   	printf("* ");  
					  
			}
			printf("\n\n");
		   
	}
	
	
	return 0;
}

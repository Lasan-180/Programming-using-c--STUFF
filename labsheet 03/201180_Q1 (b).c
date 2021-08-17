//201180
//Q1(b)

#include<stdio.h>

int main(){
	
	int i,x,z;
	
	for(i=6;i>0;i--){
		
		for(x=0;x<i-1;x++)
		
			printf("  ");
			
		for(z=6;z>x;z--)
		
			printf(" *");
			
		printf("\n");
	
		
	}
	
		
	return 0;
	
	
}

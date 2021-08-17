//201180
//Q8

#include <stdio.h>

int main(){
	
	int x;
	
	printf("\nEnter your Integer: ");
	scanf("%d",&x);
	printf("\n");
	
	int i = x;
	
	while(i>0){
	
		if(x%i==0)
			printf("%d\t",i);
			
		i=i-1;
	
}
	
	
	return 0;
	
		
}

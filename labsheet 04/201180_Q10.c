//201180
//Q10

#include <stdio.h>

int fac(int num);

int main(){
	
	int i;
	
	for (i=1;i<11;i++){
		
		printf("Factorial of %d : = %d\n",i,fac(i));
			
	}
	return 0;
			
}

int fac(int num){
		
	if(num<=1)
		return 1;
	
	return num* fac(num-1);	
	
}

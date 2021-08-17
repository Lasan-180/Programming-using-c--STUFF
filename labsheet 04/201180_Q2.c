//201180
//Q2

#include <stdio.h>

void count();

int num1;

int main(){
	
	printf("\n Enter any number :");
	scanf("%d",&num1);
	
	count();
	return 0;
	
	
}

void count(){
	
	int count,i;
	
	for(i=0;i<num1;i++){
		count=count+1;
		if(count%9==0)
			count=0;
	}
	printf("\n The value of count is : %d",count);
	
}

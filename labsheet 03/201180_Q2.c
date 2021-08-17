// 201180
//Q2

#include <stdio.h>

int main(){
	
	int page;
	
	printf("\nEnter the page number: ");
	scanf("%d",&page);
	
	if (page%2==0 || page==0)
			printf("\nThe page of a book is in left side ");
	else
			printf("\nThe page of a book is in right side ");
			
	
	return 0;
		
	
}

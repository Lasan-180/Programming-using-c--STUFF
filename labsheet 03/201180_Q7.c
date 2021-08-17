//201180
//Q7

#include <stdio.h>

int main(){
	
	char x;
	
	printf("\nEnter your character : ");
	scanf("%c",&x);
	
	if(x>='a' && x<='z')
		printf("\nx is a Lower case alphabatic character");
		else if(x>='A'&& x<='Z')
			printf("\nx is a Uppercase alphabatic character");
			else
				printf("\nx is not a alphabatic charactor");
		
		
	
	
	
	return 0;	
	
	
}

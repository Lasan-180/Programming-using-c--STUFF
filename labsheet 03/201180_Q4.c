//201180
//Q4

#include <stdio.h>

int main(){
	
	//PrintNumberInWord
	printf("\nPrintInNumber\n");
	
	int num;
	printf("\nEnter the Number :");
	scanf("%d",&num);
	
	printf("\nYour number is : ");
	
	if (num==1)
		printf("ONE");
		else if (num==2)
			printf("TWO");
			else if(num==3)
				printf("THREE");
				else if(num==4)
					printf("FOUR");
					else if(num==5)
						printf("FIVE");
						else if(num==6)
							printf("SIX");
							else if(num==7)
								printf("SEVEN");
								else if(num==8)
									printf("EIGHT");
								    else if(num==9)
										printf("NINE");
								        else if(num>9 || num==0)
											printf("OTHER");
										
	
	
	return 0;
	
	
}

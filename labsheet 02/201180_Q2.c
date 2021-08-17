
//201180
//Q2

# include <stdio.h>

int main (){
	
	int a = 1;
	
	printf("\n a value is : %d\n",a);     // we have initialized value of "a" as 1
	
	printf("\n a++ value is : %d\n",a++);  /* a++ means postfix increment opretor , this retrn the original value of a and then increse value by 1.
    now the original value is 1 return that value and after increment a become 2*/ 
	
	printf("\n ++a value is : %d\n",++a);  /* ++a means prefix increment operator, this  increse the value of a by 1 and then return the value of a.
	now a is 2 and after increment a become 3 then retuen that value*/
	
	printf("\n a-- value is : %d\n",a--);  /* a-- means postfix decrement operator, this return the original value of a and the discrese value by 1.
	now the original value is 3 return that value and after decrement a become 2*/

	printf("\n --a value is : %d\n",--a);  /* --a means prefix decrement operator, this decrese value by 1 and then return the value of a.
	now a is 2 and after decrement a become 1 then return that value*/
	
	
	
	return 0;
	
}

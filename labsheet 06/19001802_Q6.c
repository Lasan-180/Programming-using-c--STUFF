//19001802
//Q6

#include<stdio.h>
#include<string.h>

int main (){
	
	char str[10],*s;
	int i,c;
	
	printf("\nEnter your string : ");
	gets(str);
	
	s=str;
	
	while(*s !='\0'){
		c=c+1;
		s++;
		
	}
	
	printf("\nThe lengh of the string is %d",c);
		
	return 0;
}

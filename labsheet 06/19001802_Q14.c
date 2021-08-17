//19001802
//Q6

#include<stdio.h>
#include<string.h>

int main (){
	
	char str[10],*s;
	int i=0,len;
	
	printf("\nEnter your string : ");
	gets(str);
	
	len=strlen(str);
	
	s=&str[len-1];
	
	printf("\nThe string in reverse order : ");
	
	while(i<len){
		printf("%c",*s);
		s--;
		i++;
		
	}
		
	return 0;
}

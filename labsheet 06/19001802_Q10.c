//19001802
//Q10

#include<stdio.h>
#include<string.h>


void getcount (char *s,int *vowel,int *constant);
int main(){
	
	char str[10];
	int v=0,c=0,i;
	
	printf("\nEnter your string : ");
	gets(str);
	
	strlwr(str); //if string has uppercase letters convert them into lowercase
	
	getcount(str,&v,&c);
	
	return 0;
}

void getcount (char *s,int *vowel,int *constant){
	
	while(*s != '\0'){
		
		if(*s == 'a' || *s == 'b' || *s == 'c' || *s == 'd' || *s == 'e')
			*vowel = *vowel +1;
		else 
			*constant = *constant +1;
	
	s++;
		
	}
	
	printf("\nThe no of vowels are : %d",*vowel);
	printf("\nThe no of constants are : %d",*constant);
		
}

//201180
//Q10

#include <stdio.h>
#include <string.h>
#define max 20

int main (){
	
	char str [max];
	int len,i;
	
	printf("\nEnter your string : ");
	scanf("%s",&str);
	
	len=strlen(str);
	
	if(len>=3){
	
		if(str[len-1]=='g' && str[len-2]=='n' && str[len-3]=='i'){
		
			str[len]='l';
			str[len+1]='y';
		}
			
		else{
		
			str[len]='i';
			str[len+1]='n';
			str[len+2]='g';
		}
	}
	
	for(i=0;i<strlen(str);i++){
	
		printf("%c",str[i]);
	}
	
	return 0;	
}

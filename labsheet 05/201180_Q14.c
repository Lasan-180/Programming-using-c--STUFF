//201180
//Q14
 
#include <stdio.h>
#include <string.h>
#define max 50
#define len 10

int main(){
	
	char str1[len];
	char str2[max];
	int i,y;
	int error=1;
	
	printf("********CHECK YOUR WORD IS IN YOUR SENTENCE********");
	printf("\n\nEnter your word : ");
	gets(str1);
	printf("\nEnter your phrase : ");
	gets(str2);
	
	
	
	i=0;
		
		for(y=0;y<strlen(str2);y++){
			
			if(str2[y]>='a' && str2[y]<='z' || str2[y]>='A' && str2[y]<='Z' ){
				
				if(str2[y]==str1[i]){
					if(str1[i+1]==str2[y+1]){
						if(str1[i+2]==str2[y+2]){
							error=0;
					}
				}
			}															
		}
			
			
	}
		
	if(error==0)
		printf("\n------YOYR WORD IS IN SENTENCE THE PHRASE");
	else
		printf("\n------YOYR WORD IS NOT IN THE PHRASE");
		
	
	
	return 0;
}

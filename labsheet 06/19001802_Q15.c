//19001802
//Q15

#include<stdio.h>

int main(){
	
	char a[26],*s;
	int i;
	
	s=a;
	*s='A';
	
	for(i=0;i<26;i++){
		
		if(i%5==0)
			printf("\n\n");
		printf("%c\t\t",*s+i);
		
	}
	
	
	return 0;
}

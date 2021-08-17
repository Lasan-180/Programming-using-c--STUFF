//19001802
//Q9

#include<stdio.h>
#include<string.h>

void permutation(char *s,int p,int q);
void swap (char *y,char *x);

int main(){
	
	char str[10];
	int len;
	
	printf("\nEnter your string : ");
	gets(str);
	
	len=strlen(str);
		
	permutation(str,0,len);
	
	return 0;
}

void permutation(char *s,int p,int q){
	
	int i;
	if(p==q)
		printf("%s\n",s);
	else
		
		for(i=p;i<q;i++){
			
			swap(s+p,s+i);
			permutation(s,p+1,q);
			swap(s+p,s+i);				
				
			}
			
}

void swap (char *y,char *x){
	
	char tem;
	tem=*y;
	*y=*x;
	*x=tem;
	
	
}

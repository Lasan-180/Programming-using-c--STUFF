//201180
//Q11

#include <stdio.h>
#include <string.h>

int c1(char a[]);
int c2(char a[]);
int c3(char a[]);
int c4(char a[]);
int c5(char a[]);
	
int main(){
	
	char str[10];
	
	printf("\n------------------------------------VALIDATING REGISTATION NUMBER : ");
	scanf("%s",&str);
	
	int x1,x2,x3,x4,x5;
	x1=c1(str);
	x2=c2(str);
	x3=c3(str);
	x4=c4(str);
	x5=c5(str);
	
	if(x1==1 && x2==1 && x3==1 && x4==1 && x5==1 )
		printf("\n-----------------------------------THE REGISTATION NUMBER IS VALID-----------------------------------------------\n");
	else
		printf("\n-----------------------------------THE REGISTATION NUMBER IS NOT VALID----------------------------------------\n");
	return 0;
}

int c1(char a[]){
	
	printf("\nCondition 01 : There are exactly 8 characters\n");
	int len;
	len=strlen(a);
	if(len==8){
			printf("\t\t\tThe first condition satisfies\n");
		return 1;}
	else{
	
		printf("\t\t\tThe first condition does not satisfies\n");
		return 0;
	}
}

int c2(char a[]){
	
	printf("\nCondition 02 : The first character should be 'S'\n");
	if(a[0]=='S'){
	
		printf("\t\t\tThe second condition satisfies\n");
		return 1;
	}
	else{
	
		printf("\t\t\tThe second condition does not satisfies : First character is not 's'\n");
		return 0;
	}
	
	
}

int c3(char a[]){
	
	printf("\nCondition 03 : There should be exactly two '/'s\n");
	
	int i,c=0;
	for(i=0;i<strlen(a);i++){
		if (a[i]=='/')
			c=c+1;
			
	}
	if (c==2){
	
		printf("\t\t\tThe third condition satisfies\n");
		return 1;
	}
	else{
	
		printf("\t\t\tThe third condition does not satisfies : there are no exactly two '/'s\n");
		return 0;
	}
	
	
}

int c4(char a[]){
	
	printf("\nCondition 04 : The year is represented by two digits in between two '/'s\n");
	
	int c=0,i;
	for(i=0;i<strlen(a);i++){
		if (a[i]=='/'){
			if(a[i+1]>='0'&& a[i+1]<='9' && a[i+2]>='0'&& a[i+2]<='9' && a[i+3]=='/'){
			
				c=1;
				break;
			}
			else
				c=0;			
		}
			
	}
	if (c==1){
	
		printf("\t\t\tThe fourth condition satisfies\n");
		return 1;
	}
	else{
	
		printf("\t\t\tThe fourth condition does not satisfies : two digits are not in between two '/'s\n");
		return 0;
	}
	
	
}

int c5(char a[]){
	
	printf("\nCondition 05 : Last three integers immediately after second slash represent the student number\n");
	
	int i,m,c=0;
	
	while (i<strlen(a)){
		if(a[i]=='/')
			m=i;
		i=i+1;
	}
	if(a[m+1]>='0'&& a[m+1]<='9' && a[m+2]>='0'&& a[m+2]<='9' && a[m+3]>='0' && a[m+3]<='9')
			c=1;
	else
			c=0;
			
	if (c==1){
	
		printf("\t\t\tThe fifth condition satisfies\n");
		return 1;
	}
	else{
	
		printf("\t\t\tThe fifth condition does not satisfies : No integer representation\n");
		return 0;
	}		
	
	
}

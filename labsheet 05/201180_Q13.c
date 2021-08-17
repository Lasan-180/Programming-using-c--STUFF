//201180
//Q13

#include <stdio.h>
#include <string.h>
#define max 10

char stack[max];
void push(char x);
char pop();
int top = -1;

int main(){
	
	char str[max];
	int i;
	char z;
	int error = 0;
	
	printf("\nEnter your string : ");
	scanf("%s",&str);
	
	for(i=0;i<strlen(str);i++){
		
		if(str[i]=='(' || str[i]=='{' || str[i]=='[')
			push(str[i]);
			
		if(str[i]==')' || str[i]=='}' || str[i]==']')
		{		
				if (top==-1)
					error=1;
				else{
				
				z=pop();
				if (str[i]==')' && (z=='[' || z=='{'))
					error=1;
				if (str[i]==']' && (z=='(' || z=='{'))
					error=1;
				if (str[i]=='}' && (z=='[' || z=='('))
					error=1;
			}
		}
		
	}
	
	if(top>=0)
		error=1;
	
	if (error==0)
		printf("\nValid Expression");
	else
		printf("\nInvalid Enpression");	
	
	return 0;
}

void push (char x){
	
	top=top+1;
	stack[top]=x;

}

char pop (){
	
	char y;
	y=stack[top];
	top=top-1;
	return y;
	
}

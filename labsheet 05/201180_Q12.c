//201180
//Q12

#include <stdio.h>
#include <string.h>
#define max 10

char stack[max];
void push(char x);
char pop();
int top=-1;

int main(){
	
	char string[max];
	int len,i;
	
	printf("\nEnter your string : ");
	scanf("%s",&string);
	
	//get the length of the string
	len=strlen(string);
	
	//push the string in to the stack
	for(i=0;i<len;i++)
		push(string[i]);
	
	//pop the string from the stack
	printf("\nThe reverse of your string is : ");	
	for(i=0;i<len;i++){
		printf("%c",pop());
	}
	
	return 0;
}

void push(char x){
	
	top=top+1;
	stack[top]=x;
	
}

char pop(){
	
	char y;
	y=stack[top];
	top--;
	return y;	
	
}

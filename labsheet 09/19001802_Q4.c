//19001802
//Q4

#include<stdio.h>
#include<string.h>

int main(){
	
	int condition=1;
	int a=0,e=0,i=0,o=0,u=0,other=0,tot=0,y=0;
	
	FILE *fp;
	fp=fopen("myword.txt","w");
	fprintf(fp,"Word\t\t\ta\te\ti\to\tu\tother\ttotal\n");
	
	printf("To continue press 1 and to stop press 0\n");
	
	while(condition!=0){
		char word[12];
		printf("\nEnter the word : ");
		scanf("%s",&word);
		
		int a=0,e=0,i=0,o=0,u=0,other=0,tot=0,y=0;
		while(word[y]!='\0'){
			if(word[y]=='a')
					a=a+1;
			else if(word[y]=='e')
						e=e+1;
				else if(word[y]=='i')
						i=i+1;
					else if(word[y]=='o')
							o=o+1;
						else if(word[y]=='u')
								u=u+1;
							else 
								other=other+1;
						
			y++;
		}
		
		y=0;
		while(word[y]!='\0'){
			tot=tot+1;
			y++;
		}
		
		if(tot<6)
			fprintf(fp,"%s\t\t\t%d\t%d\t%d\t%d\t%d\t%d\t\t%d\n",word,a,e,i,o,u,other,tot);
		else
			fprintf(fp,"%s\t\t%d\t%d\t%d\t%d\t%d\t%d\t\t%d\n",word,a,e,i,o,u,other,tot);
			
		printf("Enter the condition : ");
		scanf("%d",&condition);
		
	}
	
	fclose(fp);
	
	return 0;
}


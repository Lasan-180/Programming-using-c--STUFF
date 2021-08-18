//19001802
//Q1

#include<stdio.h>
	
	struct student{
		
		char reg[20];
		char name[50];
		int age;
		
	};
	
int main(){
	
	struct student arr[5];
	int i;
	
	printf("\nEnter student's details :\n\n");
	
	for(i=0;i<5;i++){
		
		printf("Enter %d student's registration Number : ",i+1);
		scanf("%s",&arr[i].reg);
		printf("Enter %d student's Name : ",i+1);
		scanf("%s",&arr[i].name);
		printf("Enter %d student's Age : ",i+1);
		scanf("%d",&arr[i].age);
		
		printf("\n");
			
	}
	
	FILE * fp;
	fp = fopen("test1.txt","w");
	
	fprintf(fp,"stRe_no\t\tSt_Name\t\tSt_age\n\n");
	
	for(i=0;i<5;i++){
		
		fprintf(fp,"%s\t",arr[i].reg);
		fprintf(fp,"%s\t\t",arr[i].name);
		fprintf(fp,"%d\n",arr[i].age);
		
	}
	
	fclose(fp);	
		
	return 0;
}

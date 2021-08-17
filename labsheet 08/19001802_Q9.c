//19001802
//Q9

#include<stdio.h>

struct salary{
	
	char name[15];
	int salary;
	int hpd;
};

typedef struct salary s;

int main(){
	
	int i;
	s emp[10];
	
	printf("Enter Employees details :\n");
	
	for(i=1;i<11;i++){
		
		printf("\nEnter %d employee details :\n",i);
		printf("\tName : ");
		scanf("%s",&emp[i].name);
		printf("\tSalary : ");
		scanf("%d",&emp[i].salary);
		printf("\tHours per day : ");
		scanf("%d",&emp[i].hpd);
	}
	
	printf("\n****New salary of the employees****");
	for(i=1;i<11;i++){
		
		if(emp[i].hpd==8)
			emp[i].salary=emp[i].salary+500;
		if(emp[i].hpd==10)
			emp[i].salary=emp[i].salary+1000;
		if(emp[i].hpd==12)
			emp[i].salary=emp[i].salary+1500;
			
		printf("\n%s",emp[i].name);
		printf("\t%d",emp[i].salary);
	
	}
	
	
	return 0;
}

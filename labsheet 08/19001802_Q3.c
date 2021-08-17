//19001802
//Q3

#include<stdio.h>

struct Marks{
	
	int id;
	char name[10];
	int chem;
	int maths;
	int phy;
};

typedef struct Marks stu;

int main (){
	
	stu arr[5];
	int i;
	float perc[5];
	
	for(i=0;i<5;i++){
	 	printf("Enter x%d student details ",i+1);
		printf("\nEnter id : ");
		scanf("%d", &arr[i].id);
		printf("Enter Name : ");
		scanf("%s",&arr[i].name);
		printf("Enter chemistry marks : ");
		scanf("%d",&arr[i].chem);	
		printf("Enter Maths marks : ");
		scanf("%d",&arr[i].maths);	
		printf("Enter physics marks : ");
		scanf("%d",&arr[i].phy);
		printf("\n");	
	}
	
	for(i=1;i<6;i++)
	{
		perc[i]=(arr[i].maths+arr[i].chem+arr[i].phy)/3;
	}
		
	for(i=1;i<6;i++){
		
		printf("Percentage of %d student = %.2f\n",i,perc[i]);
	}
	
	
	
	return 0;
}







//19001802
//Q2

#include<stdio.h>

//part a
struct employee
{
	char name[8];
	int num;
	int sal;
	int ot;
	int netsal;
};
struct employee arr[4];

//part c
int netsal(int c){
	
	int i,count=0;
	for(i=0;i<c-1;i++){
		
		arr[i].netsal=arr[i].sal+arr[i].sal*0.35+arr[i].ot*15;
	}
	
	//part d	
	for(i=0;i<c-1;i++){
		
		count=count+arr[i].netsal;
	}
	
	//part e
	printf("\nEmployee No\tBasic salary\tOT amount\tNet salary\n");
	
	for(i=0;i<c-1;i++){
		
		printf("00%d\t\t",arr[i].num);
		printf("%d.00\t",arr[i].sal);
		printf("%d\t\t",arr[i].ot);
		printf("%d.00\n",arr[i].netsal);
		
	}
	return count;
}

int main(){
	
	//part b
	char val[50];
	int sr,i,c;
	
	FILE *fp;
	fp=fopen("Data.txt","r");
	
	if(fp==NULL)
		printf("Can not open the file");
	else
	{	
		for(i=0;i<4;i++)
		{
		sr=fscanf(fp,"%s",&val);
		}
			
		for (i=0;sr!=EOF;i++){
			sr=fscanf(fp,"%s",&arr[i].name);
			sr=fscanf(fp,"%d",&arr[i].num);
			sr=fscanf(fp,"%d",&arr[i].sal);
			sr=fscanf(fp,"%d",&arr[i].ot);
			c=c+1;
		}
		
	}
	fclose(fp);
	
	//part f
	printf("\nTotal amount of money this company should have to pay the employee salaries = %d.00",netsal(c));
	
	return 0;
}

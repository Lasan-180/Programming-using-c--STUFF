//19001802
//Q3

#include<stdio.h>

//part a
struct household
{
	int id;
	int income;
	int num;

};
struct household arr[5];

//part c i
int average(int c){
	
	int i,avg,total=0;
	for(i=0;i<c-1;i++){
		total=total+arr[i].income;
	}
	avg=total/(c-1);
	return avg;
	
}

//part c ii
int total(int c){
	
	int i,total=0;
	for(i=0;i<c-1;i++){
		total=total+arr[i].num;
	}
	return total;
	
}

//part c iii
int median(int c){
	
	int medianpoint=total(c)/2;
	int i,total=0,median;
	
	for(i=0;i<c-1;i++){
		total=total+arr[i].num;
		if(total>=medianpoint){
			median=arr[i].income;
			break;
		}
			
	}
	return median;
}

int main(){
	
	//part b
	char val[50];
	int sr,i,c;
	
	FILE *fp;
	fp=fopen("readme.txt","r");
	
	if(fp==NULL)
		printf("Can not open the file");
	else
	{	
		for(i=0;i<3;i++)
		{
		sr=fscanf(fp,"%s",&val);
		printf("%s\t",val);
		}
		printf("\n\n");
		
		for (i=0;sr!=EOF;i++){
			sr=fscanf(fp,"%d",&arr[i].id);
			sr=fscanf(fp,"%d",&arr[i].income);
			sr=fscanf(fp,"%d",&arr[i].num);
			c=c+1;
		}
		
	}
	fclose(fp);
	
	//part d
	for(i=0;i<c-1;i++){
		printf("   %d\t\t\t",arr[i].id);
		printf("%d\t\t\t",arr[i].income);
		printf("%d\n",arr[i].num);
	}
	printf("\nAverage household Income ($) = %d\n",average(c));
	printf("\nTotal number of members in the town = %d\n",total(c));
	printf("\nMedian Annual Income ($) = %d",median(c));
	
	
	return 0;
}

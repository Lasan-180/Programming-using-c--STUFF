//201180
//Q9

#include <stdio.h>

int main()	
{
	int n,i;
	int count=0,max=0;
	printf("\nEnter the num of 1,s and 0,s :");
	scanf("%d",&n);
	
	int list[n];

	for(i=0;i<n;i++){
		
		printf("\nEnter your %d srting : ",i);
		scanf("%d",&list[i]);
	}
	
	printf("\nyour string is : ");	
	for(i=0;i<n;i++)
		printf("%d",list[i]);
		
	
	for(i=0;i<n;i++){
		if(list[i]==1)
		{
		count=count+1;
		if(count>max)
			max=count;	
		}
		else
			count=0;
		
			
	}
	
	printf("\n\nMax no of consctive 1's is : %d",max);


	return 0;
	
	
}

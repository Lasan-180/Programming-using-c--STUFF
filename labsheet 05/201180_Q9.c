//201180
//Q9

#include <stdio.h>

int main(){
	
	int num1,num2,i,y,len;
	int count=0;
	
	//get no of integers in the range	
	printf("\nEnter your number of integers in your number range :");
	scanf("%d",&len);
	
	int arr[len];
	
	printf("\n");
	
	//enter the integers in to an array
	printf("Enter the numbers in the range :\n");
	for (i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	
	//find np of 2's in number range
	for (y=0;y<len;y++){
		while (arr[y]!=0){
			if(arr[y]%10==2)
				count++;
			arr[y]=arr[y]/10;
		}	
	}
	
	printf("\nNo of 2's in given range is : %d",count);
	
	return 0;
	
}

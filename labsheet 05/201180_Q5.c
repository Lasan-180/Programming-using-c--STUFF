//201180
//Q5

#include <stdio.h>
#define max 10

int main(){
	
	int a[max];
	int i,y;
	int c=0;
	
	//get the user elemnts and store in an array
	printf("\nEnter your ten numbers : \n");
	
	for(i=0;i<max;i++)
		scanf("%d",&a[i]);	
	
	int len=max;
	printf("\nThe distict elements are : ");
	
	for(i=0;i<len;i++){
		for(y=0;y<i;y++){
			if(a[i]==a[y])
				break;
		
		}
		if(i==y){		
			c++;
			printf("%d ",a[i]);
			
		}
		
	}
	printf("\nThe no of distinct elements is : %d",c);
	
		
	return 0;
}


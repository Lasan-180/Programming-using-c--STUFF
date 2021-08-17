//19001802
//Q12

#include<stdio.h>

int main(){
	
	int n,i,a[n],*p,*q,sum=0;
	
	//get the array size
	printf("\nEnter the no of elements in the array : ");
	scanf("%d",&n);
	
	p=a;
	q=a;
	
	//store the array elements using a pointer
	printf("\nEnter the elements of the array :\n");
	for(i=0;i<n;i++){
		printf("Enter your %d element : ",i+1);
		scanf("%d",(p+i));
		
	}
			
	for(i=0;i<n;i++){
		
		sum=sum+*q;
		q++;
				
	}
	//printing the sum of array elemets using a pointer
	printf("\nThe sum of the elements are : %d ",sum);
		
	return 0;
}

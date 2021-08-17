//19001802
//Q4

#include<stdio.h>

int main (){
	
	int n,i,a[n],*p,*q;
	
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
			
	//printing array elements using a pointer
	printf("\nThe elememts in the array are :\n ");
	for(i=0;i<n;i++){
		
		printf("\tThe value of a[%d] is %d\n",i,*q);
		q++;
				
	}
	
	return 0;
}

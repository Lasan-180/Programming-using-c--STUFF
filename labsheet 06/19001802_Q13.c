//19001802
//Q13

#include<stdio.h>

int main (){
	
	int n,i,a[n],*p,*q;
	
	//get the array size
	printf("\nEnter the no of elements in the array : ");
	scanf("%d",&n);
	
	p=a;
	q=&a[n-1];
	
	//store the array elements using a pointer
	printf("\nEnter the elements of the array :\n");
	for(i=0;i<n;i++){
		printf("Enter your %d element : ",i+1);
		scanf("%d",(p+i));
		
	}
			
	//printing array elements in reverse order using a pointer
	printf("\nThe elememts in reverse order :\n ");
	for(i=0;i<n;i++){
		
		printf("\tThe value of a[%d] is %d\n",n-i,*q);
		q--;
				
	}
	
	return 0;
}

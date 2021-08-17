//19001802
//Q11

#include<stdio.h>

void sort(int *q,int n);
int main(){
	
	int n,i,a[n],x;
	
	//get the array size
	printf("\nEnter the no of elements in the array : ");
	scanf("%d",&n);
			
	//store the array elements 
	printf("\nEnter the elements of the array :\n");
	for(i=0;i<n;i++){
		printf("Enter your %d element : ",i+1);
		scanf("%d",&a[i]);
		
	}
		
	sort(a,n);	
	
	printf("\nThe sorted array is : \t");
	
	for(x=0;x<n;x++){
		printf("%d ",a[x]);
		
	}
	
	return 0;
}

void sort(int *q,int n){
	
	int x,small,y,tem;
	
	for(x=0;x<n-1;x++){
		small=x;
		tem=*(q+x);
				
		for(y=x+1;y<n;y++){
			
			if(*(q+y)<*(q+small)){
				small=y;
				
			}
			
		}
		*(q+x)=*(q+small);
		*(q+small)=tem;	
				
	}
	
		
	
}

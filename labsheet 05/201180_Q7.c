//201180
//Q7

#include <stdio.h>
#define max 10

int main(){
	
	float a[max];
	int i,j;
	float temp;
	
	printf("\nEnter your numberts to be sorted : \n");
	for(i=0;i<max;i++){
		scanf("%f",&a[i]);
	}
	
	//sorting the array using bubble sort
	
	for(i=0;i<max-1;i++){
		
		for(j=0;j<max-i-1;j++){
			
			if(a[j]>a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				
			}
		}
		
		
	}
	
	printf("\nThe sorted array :\n");
	//print sorted array
	for(i=0;i<max;i++)
		printf("%.1f  ",a[i] );
	
	
	
	
	
	
	
	
	return 0;
}

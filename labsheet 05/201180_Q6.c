//201180
//Q6

# include <stdio.h>

int main(){
	
	int array[10];
	int i,min,y,key;
	
	//get the user input 10 elements
	printf("Enter your 10 elements : \n");
	
	//store them in an array
	for(i=0;i<10;i++)
		scanf("%d",&array[i]);
		
	//sorting the array(selection sort)
	for(i=0;i<9;i++){
		
		min=i;
		int key = array[i];	
		
		for(y=i+1;y<10;y++){
			if(array[y]<array[min])
				min=y;			
		}
				
		array[i]=array[min];
		array[min]=key;
		
	}
	printf("\nThe sorted number list is:\n");
	
	//print sorted array
	for(i=0;i<10;i++)
		printf("%d ",array[i]);
	

	return 0;
}

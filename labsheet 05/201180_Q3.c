//201180
//Q3

#include <stdio.h>

float total(float arr[]);
float average(float arr[]);
float minimum(float arr[]);
float maximum(float arr[]);
float mode(float arr[]);

int main(){
	
	float array[15]={34.5,56.7,12.6,98.4,54.21,89.55,54.2,98.4,73.2,21.45,34.5,98.4,21.45,98.4,9.3};
	int option;
	
	printf("\nMenu of options :");
	printf("\n\n1.Total of the elements\n2.Average of the elements\n3.Minimun Element of the array\n4.Maximun Element of the array\n5.Most appeared Number in the array\n");
	printf("\nEnter your option :");
	scanf("%d",&option);
	 
	switch(option){
		
		case 1:
			printf("\nTotal of the elements in the array is %f",total(array));
			break;
		case 2:
			printf("\nAverage of the elements in the array is %f",average(array));
			break;
		case 3:
			printf("\nMinimun element of the array is %.1f",minimum(array));
			break;
		case 4:
			printf("\nMaximum element of the array is %.1f",maximum(array));
			break;
		case 5:
			printf("\nThe mode of the array is %.1f",mode(array));
	
	}
	
	
	return 0;
}

float total(float arr[]){
	
	int i;
	float sum=0;
	
	for(i=0;i<15;i++){
		sum=sum+arr[i];	
		
	}
	return sum;	
	
}

float average(float arr[]){
	
	int i;
	float avg;
	float sum=0.0;
	
	for(i=0;i<15;i++){
		sum=sum+arr[i];	
		
	}
	avg=sum/15;
	return avg;	
	
}
float minimum(float arr[]){
	
	float small=arr[0];
	int y;
	
	for(y=1;y<15;y++){
		
		if(small>arr[y])
			small=arr[y];
		
	}
	return small;
	
}

float maximum(float arr[]){
	
	float big=arr[0];
	int y;
	
	for(y=1;y<15;y++){
		
		if(big<arr[y])
			big=arr[y];
		
	}
	return big;
	
}

float mode(float arr[]){
	
	//first sort the array
	int i,y;
	
	for(i=0;i<14;i++){
		
		int min=i;
		float key=arr[i];
		
		for(y=i+1;y<15;y++){
			
			if(arr[y]<arr[min])
				min=y;
		}
		
		arr[i]=arr[min];
		arr[min]=key;
		
	}
	
	//then find most appeared element
	int cc=0, mc=0;                //cc=current count
	float mm;                      //mc=maximum count
								  //mode
	for(i=1;i<15;i++){
		
		if(arr[i]==arr[i-1]){
			cc=cc+1;
		}
		else if(cc>mc){
				mc=cc;
				mm=arr[i-1];
				cc=1;
				
				}
			
	}
	if(cc>mc){
		mc=cc;
		mm=arr[14];
	}
	
	return mm;
	
	
}


























	
	
	
	
	
	
	
	
	
	
	
	
	
	


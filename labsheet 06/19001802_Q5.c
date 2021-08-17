//19001802
//Q5

#include<stdio.h>

int main(){
	
	int i,n,*p,large;
	
	printf("Number of elements to be entered: ");
	scanf("%d",&n);
	
	p = (int*) calloc(n,sizeof(int));  
	
	printf("\nEnter your numbers: \n");
	for(i=0; i<n; i++){
		scanf("%d", &p[i]);
	}
	
	large=*(p+0);
	
	for(i=0;i<n;i++){
		
		if(large<*(p+i))
			large=*(p+i);
	}
	
	printf("\nThe largest number is : %d",large);
	
	free(p);
	
	return 0;
}

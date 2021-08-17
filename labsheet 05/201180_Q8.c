//201180
//Q8

#include <stdio.h>

int main (){
	
	int i,y,m,n,t;
	int a[5];
	
	printf("\nEnter your 05 integers : \n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<4;i++){
		
		int key=a[i];
		int max=i;
		
		m=a[i];
		while(m>10){
			m=m/10;			
		}
		
		for(y=i+1;y<5;y++){
			
			n=a[y];
			while(n>10){
				n=n/10;
			}
				
				
			if(n>m)
				max=y;
				
		}
		
		a[i]=a[max];
		a[max]=key;
		
		
	}
	
	printf("\nThe largest possible number from above integers is : ");
	for(i=0;i<5;i++)
		printf("%d",a[i]);
	
	
	return 0;
}

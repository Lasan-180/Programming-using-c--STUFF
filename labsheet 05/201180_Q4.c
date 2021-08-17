//201180
//Q4

#include <stdio.h>
char grade(int x);
int max;

int main(){
	
	int a[5];
	int i;
	
	printf("\nEnter the scores of five students\n");
	
	for(i=0;i<5;i++){
	
	printf("\t\tScore of %d student : ",i+1);
	scanf("%d",&a[i]);
	}
	
	 //get the max value(best score)
	 max=a[0];
	for(i=0;i<4;i++){
		if(a[i]>max)
			max=a[i];
		
	}
	
	printf("\nThe best score is : %d\n",max);	
	
	//get the grade and print
	for(i=0;i<5;i++){
	
		printf("\nThe grade of the %d student is : %c" ,i+1,grade(a[i]));
	
	}
	
	return 0;
}

char grade(int x){
	
	if(x>=max-10)
		return 'A';
		else if (x>=max-20)
				return 'B';
				else if (x>=max-30)
						return 'C';
						else if (x>=max-40)
							return 'D';
							else
								return'F';
		
		
		
	}
	
	
	


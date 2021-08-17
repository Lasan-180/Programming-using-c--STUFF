// 201180
//Q1

#include <stdio.h>

int main(){
	
	int p,q,x,y;
	
	//declare an 2D array
	int array [10][10];
				
	//initialize values for 2D array
	for (p=0;p<10;p++){
		for(q=0;q<10;q++)
			array[p][q]=(p+1)*(q+1);
		
	}
	
	//print the manipulation Table
	printf("                              **********MULTIPLICATION TABLE**********\n\n");
	
	printf("\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");
	printf("\t~\t~\t~\t~\t~\t~\t~\t~\t~\t~\n");
	printf("\n");
	
		
	for (x=0;x<10;x++){
		printf("%d > \t",x+1);
		for(y=0;y<10;y++)
			printf("%d\t",array[x][y]);
		printf("\n\n");
		
	}
		
	return 0;
}

//201180
//Q2

#include <stdio.h>

int addition();
int subtraction();
int multiplication();

int arr1[3][3]={{3,5,7},{1,6,5},{4,9,8}};
int arr2[3][3]={{6,0,2},{4,7,1},{7,2,1}};

int main(){
	
	int i,y,option;
		
	printf("\nMatrix 1:\n");
	for (i=0;i<3;i++){
		for(y=0;y<3;y++)
			printf("%d  ",arr1[i][y]);
		printf("\n");
	}
	
	printf("\nMaterix 2:\n");
	for (i=0;i<3;i++){
		for(y=0;y<3;y++)
			printf("%d  ",arr2[i][y]);
		printf("\n");
	}
	
	printf("\nMenu option");
	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n");
	printf("\nEnter your option : ");
	scanf("%d",&option);
	
	switch(option){
		case 1: 
				addition();
				break;
		case 2:
				subtraction();
				break;
		case 3:
				multiplication();
				break;
		
	}
	
	
	return 0;
}

int addition(){
	
	int x,y;
	int arr3[3][3];
	
	for (x=0;x<3;x++){
		for(y=0;y<3;y++)
			arr3[x][y]=arr1[x][y]+arr2[x][y];	
	}
	for(x=0;x<3;x++){
		for(y=0;y<3;y++)
			printf("%.2d  ",arr3[x][y]);
		printf("\n");
	}
}

int subtraction(){
	
	int x,y,option;
	int arr3[3][3];
	
	printf("\n1.Matrix1-Matrix2");
	printf("\n2.Matrix2-Matrix1");
	printf("\nEnter your option :");
	scanf("%d",&option);
	printf("\n");

	switch(option){
		
		case 1:
			for (x=0;x<3;x++){
				for(y=0;y<3;y++)
					arr3[x][y]=arr1[x][y]-arr2[x][y];	
			}
			for(x=0;x<3;x++){
				for(y=0;y<3;y++)
					printf("%d  ",arr3[x][y]);
				printf("\n");
			}	
			break;
			
		case 2:
				for (x=0;x<3;x++){
					for(y=0;y<3;y++)
						arr3[x][y]=arr2[x][y]-arr1[x][y];	
				}
				for(x=0;x<3;x++){
					for(y=0;y<3;y++)
						printf("%d  ",arr3[x][y]);
					printf("\n");
				}
				break;	
		
	}

	
	
}

int multiplication(){
	
	int x,y,option;
	int arr3[3][3];
	
	printf("\n1.Matrix1*Matrix2");
	printf("\n2.Matrix2*Matrix1");
	printf("\nEnter your option :");
	scanf("%d",&option);
	printf("\n");

	switch(option){
		
		case 1:
			for (x=0;x<3;x++){
				for(y=0;y<3;y++)
					arr3[x][y]=arr1[x][0]*arr2[0][y]+arr1[x][1]*arr2[1][y]+arr1[x][2]*arr2[2][y];
				}
			for(x=0;x<3;x++){
				for(y=0;y<3;y++)
					printf("%.3d  ",arr3[x][y]);
				printf("\n");
			}	
			break;
			
		case 2:
				for (x=0;x<3;x++){
					for(y=0;y<3;y++)
						arr3[x][y]=arr2[x][0]*arr1[0][y]+arr2[x][1]*arr1[1][y]+arr2[x][2]*arr1[2][y];	
				}
				for(x=0;x<3;x++){
					for(y=0;y<3;y++)
						printf("%.3d  ",arr3[x][y]);
					printf("\n");
				}
				break;	
		
	}
		
}























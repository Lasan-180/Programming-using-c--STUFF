//19001802
//Q4

#include<stdio.h>

struct distance {
	
	int inch;
	int feet;
};

typedef struct distance dis;

void addition (int x,int y);

int main(){
	
	dis x1,x2;
	int inch,feet;
		
	printf("Enter first distansc :\n");
	printf("Feet : ");
	scanf("%d",&x1.feet);
	printf("Inches : ");
	scanf("%d",&x1.inch);
	
	printf("\nEnter second distansc :\n");
	printf("Feet : ");
	scanf("%d",&x2.feet);
	printf("Inches : ");
	scanf("%d",&x2.inch);
	
	inch = x1.inch+x2.inch;
	feet = x1.feet+x2.feet;
	
	addition(inch,feet);

	
	return 0;
}

void addition(int x,int y){
	
	dis ainch;
	int inch,feet;
	
	inch=x%12;
	feet=x/12;
	
	ainch.feet=y+feet;
	ainch.inch=inch;
	
	
	printf("\nThe addition of above Two distances is :");
	printf("\n\tFeet : %d",y+feet);
	printf("\n\tInches : %d",inch);
		
}


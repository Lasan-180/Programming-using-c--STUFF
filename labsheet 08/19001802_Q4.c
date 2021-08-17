//19001802
//Q4

#include<stdio.h>

struct com_num{
	
	int real;
	int imaginary;
	
};
typedef struct com_num num;

void addition (int x,int y){
	
	num add;
	add.real=x;
	add.imaginary=y;
	
	printf("\n\nThe addition of above two complex numbers :\n");
	printf("Real part = %d",add.real);
	printf("\nImaginary part = %di",add.imaginary);
}

void subtraction (int x,int y){
	
	num sub;
	sub.real=x;
	sub.imaginary=y;
	
	printf("\n\nThe suntraction of above two complex numbers :\n");
	printf("Real part = %d",sub.real);
	printf("\nImaginary part = %di",sub.imaginary);
}

void multiply(int x,int y,int z,int r){
	
	num mul;
	
	mul.real = x*y-z*r;
	mul.imaginary=x*r+y*z;
	
	printf("\n\nThe multiplication of above two complex numbers :\n");
	printf("Real part = %d",mul.real);
	printf("\nImaginary part = %di",mul.imaginary);
	
}

int main(){
	
	num num1,num2;
	
	printf("\nEnter real part of first number : ");
	scanf("%d",&num1.real);
	printf("Enter imaginary part of first number : ");
	scanf("%d",&num1.imaginary);
	
	printf("\nEnter real part of second number : ");
	scanf("%d",&num2.real);
	printf("Enter imaginary part of second number : ");
	scanf("%d",&num2.imaginary);
	
	addition(num1.real+num2.real,num1.imaginary+num2.imaginary);
	subtraction(num1.real-num2.real,num1.imaginary-num2.imaginary);
	multiply(num1.real,num2.real,num1.imaginary,num2.imaginary);
	
	return 0;
	
}

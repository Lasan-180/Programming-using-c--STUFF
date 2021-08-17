//19001802
//Q8

#include<stdio.h>
 
void findFactorial(int *fac,int num1);
int main(){
  int i,*factorial,num;
 
  printf("\nEnter a number: ");
  scanf("%d",&num);
 
  factorial=&num;	
  findFactorial(factorial,num);
 
  return 0;
}
 
void findFactorial(int *fac,int num1){
    int i;
 
    *fac=1;
 
    for(i=1;i<=num1;i++)
      *fac=*fac*i;
      
    printf("Factorial of %d is: %d",num1,*fac);
 
}

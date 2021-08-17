//19001802
//Q6

#include<stdio.h>

struct customers{
	
	char name[10];
	int accno;
	int balance;
	
};

typedef struct customers cus;

void fun_a(int n,cus arr[]){
	
	int i;
	printf("\n****customers who have balance less than 200 ****\n");
	
	for(i=0;i<n;i++){
		
		if(arr[i].balance<200)
			printf("%s\n",arr[i].name);
	}
	
}

void fun_b(int n,cus arr[]){
	
	int i;
	printf("\n****New balance who had more than 1000 balance ****\n");
		
	for(i=0;i<n;i++){
		
		if(arr[i].balance>1000){
		
			arr[i].balance=arr[i].balance+100;
			printf("New balance of customer %d is %d\n",i+1,arr[i].balance);
			
		}
	}
	
}

int main (){
	
	int i,n;
		
	printf("Enter no of customerss more than 10 : ");
	scanf("%d",&n);
	
	cus arr[n];
		
	for(i=0;i<n;i++){
	 	printf("Enter %d customer details ",i+1);
		printf("\nEnter Name : ");
		scanf("%s",&arr[i].name);
		printf("Enter account number : ");
		scanf("%d",&arr[i].accno);	
		printf("Enter account balance : ");
		scanf("%d",&arr[i].balance);	
		printf("\n");	
	}
	
	fun_a(n, arr);
	fun_b(n,arr);
	
	return 0;
}



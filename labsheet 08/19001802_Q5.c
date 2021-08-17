//19001802
//Q5

#include <stdio.h>

struct student{
	
	int id;
	char name[10];
	int age;
	char address[20];
};

typedef struct student stu;

void fun_a(int n,stu arr[]){
	
	int i;
	printf("\n****Students more than age 14 ****\n");
	
	for(i=0;i<n;i++){
		
		if(arr[i].age==14)
			printf("%s\n",arr[i].name);
	}
	
}

void fun_b(int n,stu arr[]){
	
	int i;
	printf("\n****Students who has even id number ****\n");
		
	for(i=0;i<n;i++){
		
		if(arr[i].id%2==0)
			printf("%s\n",arr[i].name);
	}
	
}

void fun_c(int n,stu arr[]){
	
	int i,num,m;
	printf("\n****Students who has given id number ****\n");
		
	printf("Enter the id number you want whom details : ");
	scanf("%d",&num);
	
	for(i=0;i<n;i++){
		if(arr[i].id==num)
			m=i;
	}
	
	printf("%d\n",arr[m].id);
	printf("%s\n",arr[m].name);
	printf("%d\n",arr[m].age);
	printf("%s\n",arr[m].address);
	
}

int main(){
	
	int i,n;
		
	printf("Enter no of students more than 10 : ");
	scanf("%d",&n);
	
	stu arr[n];
		
	for(i=0;i<n;i++){
		
		printf("\nEnter %d student detail ",i+1);
		printf("\nEnter id : ");
		scanf("%d",&arr[i].id);
		printf("Enter Name : ");
		scanf("%s",&arr[i].name);
		printf("Enter age : ");
		scanf("%d",&arr[i].age);
		printf("Enter address : ");
		scanf("%s",&arr[i].address);
	}
	
	fun_a(n, arr);
	fun_b(n,arr);
	fun_c(n,arr);
	
	
	return 0;
}

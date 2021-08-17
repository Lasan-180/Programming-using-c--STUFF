//19001802
//Q1

#include<stdio.h>
#include<string.h>

struct student{
		
		int id;
		char name[15];
		int age;
		char address[30];
	};
	
typedef struct student stu;
	
int main(){
		
	stu amal,nimal,kamal,sunil,pavan;
	
	amal.id = 110;
    strcpy(amal.name,"Amal Perera");
	amal.age=18;
	strcpy(amal.address,"280/1,Hanthana,Kandy");
	
	nimal.id = 329;
    strcpy(nimal.name,"Nimal Jayasooriya");
	nimal.age=15;
	strcpy(nimal.address,"473/H,Malwaththa Road,Kaduwela");
	
	kamal.id = 456;
    strcpy(kamal.name,"Kamal Aththanayaka");
	kamal.age=13;
	strcpy(kamal.address,"23/A,Horampella,Galle");
	
	sunil.id = 566;
    strcpy(sunil.name,"Sunil Fernando");
	sunil.age=14;
	strcpy(sunil.address,"211/5,Paranagama,Rathnapura");
	
	pavan.id = 711;
    strcpy(pavan.name,"Pavan Rashmika");
	pavan.age=12;
	strcpy(pavan.address,"89/L1,Iddagas Junction,Horana");
	
	printf("First Student Details;\n");
	printf("Student ID : %d \n",amal.id);
	printf("Student Name : ");
	puts(amal.name);
	printf("Student age : %d \n",amal.age);
	printf("Student address : ");
	puts(amal.address);
	
	printf("\nSecond Student Details;\n");
	printf("Student ID : %d \n",nimal.id);
	printf("Student Name : ");
	puts(nimal.name);
	printf("Student age : %d \n",nimal.age);
	printf("Student address : ");
	puts(nimal.address);
	
	printf("\nThird Student Details;\n");
	printf("Student ID : %d \n",kamal.id);
	printf("Student Name : ");
	puts(kamal.name);
	printf("Student age : %d \n",kamal.age);
	printf("Student address : ");
	puts(kamal.address);
	
	printf("\nFourth Student Details;\n");
	printf("Student ID : %d \n",sunil.id);
	printf("Student Name : ");
	puts(sunil.name);
	printf("Student age : %d \n",sunil.age);
	printf("Student address : ");
	puts(sunil.address);
	
	printf("\nFifth Student Details;\n");
	printf("Student ID : %d \n",pavan.id);
	printf("Student Name : ");
	puts(pavan.name);
	printf("Student age : %d \n",pavan.age);
	printf("Student address : ");
	puts(pavan.address);
	
	
	return 0;
	
}

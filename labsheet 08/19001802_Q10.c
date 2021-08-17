//19001802
//Q10

#include <stdio.h>
#include <string.h>

struct book{
	int acce_num;
	char author[15];
	char title[15];
	int flag;
};

typedef struct book b;

void display(b book[],int n){
	
	int i;
	
	for(i=0;i<n;i++){
		printf("\nBook %d Details : \n",i+1);
		printf("Access Number : %d\n",book[i].acce_num);
		printf("Author : %s\n",book[i].author);
		printf("Title : %s\n",book[i].title);
		printf("Flag : %d\n",book[i].flag);	
		
	}
	
}

int add(b book[],int n){
	
	printf("\nEnter Access Number : ");
	scanf("%d",&book[n].acce_num);
	getchar();
	printf("Enter Author : ");
	gets(book[n].author);
	printf("Enter Title : ");
	gets(book[n].title);
	
	book[n].flag=1;
	n=n+1;
	
	return n;
	
}

void countbytitle(b book[],int n){
	
	int i,m=0,result;
	char Title[10];
	
	printf("\nEnter the title : ");
	getchar();
	gets(Title);
	
	
	
	for(i=0;i<n;i++){
		
		result=strcmp(book[i].title,Title);
		if(result ==0)
			m=m+1;				
		
	}
	
	printf("\nNo of books : %d",m);
	
}

void searchbyauthor(b book[],int n){
	
	int i,result;
	char author[20];
	
	printf("\nEnter the Author : ");
	getchar();
	gets(author);
		
	for(i=0;i<n;i++){
		
		result=strcmp(book[i].author,author);
		if(result ==0){
			printf("%d\t",book[i].acce_num);
			puts(book[i].title);
		}
		
	}
		
}

int issue(b book[],int n){
	
	int num,i;
	
	printf("\nEnter Access Number : ");
	scanf("%d",&num);
	
	for(i=0;i<n;i++){
		
		if(book[i].acce_num==num){
			if(book[i].flag==0)
				printf("Can,t issue.Already issued.");
			else
				{
				book[i].flag=0;
				printf("Successfully issued.");
				}
		}
	}
	n=n-1;
	return n;
	
}

int main(){
	
	int num,n;
	
	n=6;
	b book[n]; //currently libray has 6 books
	
	book[0].acce_num=1234;
	strcpy(book[0].author,"Amal Perera");
	strcpy(book[0].title,"Little girl");
	book[0].flag=1;
	
	book[1].acce_num=2345;
	strcpy(book[1].author,"Edn Amertra");
	strcpy(book[1].title,"Secert circle");
	book[1].flag=0;
	
	book[2].acce_num=9875;
	strcpy(book[2].author,"Martin wickckramasingha");
	strcpy(book[2].title,"Madol duwa");
	book[2].flag=1;
	
	book[3].acce_num=1003;
	strcpy(book[3].author,"Amal Perera");
	strcpy(book[3].title,"Little angle");
	book[3].flag=0;
	
	book[4].acce_num=5004;
	strcpy(book[4].author,"Ediriweera Sarathchandra");
	strcpy(book[4].title,"Sinhabahu");
	book[4].flag=1;
	
	book[5].acce_num=1734;
	strcpy(book[5].author,"Amal Perera");
	strcpy(book[5].title,"Little girl");
	book[5].flag=1;
	
	printf("****Menu *****\n");
	printf("1.Display book information\n");
	printf("2.Add a new book\n");
	printf("3.Display the number of books of a particular title\n");
	printf("4.Display all the books in the library of a particular author\n");
	printf("5.Display the total number of books in the library\n");
	printf("6.Issue a book");
	
	printf("\nTo stop press -1");
	printf("\n\nEnter your option : ");
	scanf("%d",&num);
	while(num!=-1){
	
		switch(num){
			case 1:
				display(book,n);
				break;
			case 2:
				n=add(book,n);
				break;
			case 3:
				countbytitle(book,n);
				break;
			case 4:
				searchbyauthor(book,n);
				break;
			case 5:
				printf("\nTotal no of book : %d",n);
				break;
			case 6:
				n=issue(book,n);
				break;		
		
		}
		printf("\n\nEnter your option : ");
		scanf("%d",&num);
	}
	return 0;
}

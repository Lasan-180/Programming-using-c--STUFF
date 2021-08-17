//19001802
//Q11

#include<stdio.h>
#include<string.h>

struct item{
	char code[10];
	char title[20];
	float unit;
	char measure[3];
	float price;
	float stock;
	
};

typedef struct item u;

void display(u unit[],int n){
	
	int i;
	
	printf("ItemCode\tUnit\t\tPrice\t\tStock\t\tItem\n");
	printf("...............................................................................\n");
	
	for(i=0;i<n;i++){
		
		printf("%s\t\t%.1f%s\t\t%.1f\t\t%.1f\t\t",unit[i].code,unit[i].unit,unit[i].measure,unit[i].price,unit[i].stock);
		puts(unit[i].title);
		
	}
	
}

int main(){
	
	u unit[25];
	int n=25,num;
	
	strcpy(unit[0].code,"ITEM400");
	strcpy(unit[0].title,"Sunlight Soap");
	unit[0].unit=1;
	unit[0].price=27;
	unit[0].stock=200;
	
	strcpy(unit[1].code,"ITEM401");
	strcpy(unit[1].title,"Anchor packet(400g)");
	unit[1].unit=1;
	unit[1].price=170;
	unit[1].stock=50;
	
	strcpy(unit[2].code,"ITEM404");
	strcpy(unit[2].title,"Anchor packet(1kg)");
	unit[2].unit=1;
	unit[2].price=550;
	unit[2].stock=25;
	
	strcpy(unit[3].code,"ITEM412");
	strcpy(unit[3].title,"Rice");
	unit[3].unit=1;
	strcpy(unit[3].measure,"kg");
	unit[3].price=80;
	unit[3].stock=300.5;
	
	strcpy(unit[4].code,"ITEM420");
	strcpy(unit[4].title,"Dhal");
	unit[4].unit=500;
	strcpy(unit[4].measure,"g");
	unit[4].price=65.50;
	unit[4].stock=200.75;
	
	strcpy(unit[5].code,"ITEM419");
	strcpy(unit[5].title,"Cordial Bottle");
	unit[5].unit=250;
	strcpy(unit[5].measure,"ml");
	unit[5].price=225.50;
	unit[5].stock=10;
	
	strcpy(unit[6].code,"ITEM411");
	strcpy(unit[6].title,"Sun Flower oil");
	unit[6].unit=1;
	strcpy(unit[6].measure,"L");
	unit[6].price=160;
	unit[6].stock=20;
	
	display(unit,7);
	

	return 0;
}

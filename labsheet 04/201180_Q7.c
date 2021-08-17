//201180
//Q7

#include <stdio.h>

int getyear(int n1[]);
void getmonth_days(int n2[]);

int main(){
	
	int nic[9],l;
	
	printf("\n");
	for(l=0;l<9;l++){
	
		printf(" Enter your %d number of NIC number :",l);
		scanf("%d",&nic[l]);
	}
	getmonth_days(nic);
	return 0;
}
		

int getyear(int n1[]){
	
	int y;
	if(n1[0]>2)
		y=1900+n1[0]*10+n1[1];
	else
		y=2000+n1[0]*10+n1[1];
	return y;
	
}

void getmonth_days(int n2[]){
	
	int m,days,month=0;
	int mon[]= {31,29,31,30,31,30,31,30,31,30,31,30};
	
	int da=n2[2]*100+n2[3]*10+n2[4];
	if(da>500)
		da=da-500;
	
	for(m=0;m<sizeof(mon);m++){
		if(da<mon[m]){
		
			days=da;
			month=m+1;
			break;
		}
		else
			da=da-mon[m];
	}	
	printf("\n\nYour birthday is : %d-%d-%d",getyear(n2),month,days);
}

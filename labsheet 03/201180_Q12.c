//201180
//Q12


#include <stdio.h>

int main(){
	

	int f,t,v;
	int c=0;      //c= count
	
	printf("Your number range ");
	printf("\n	from: ");
	scanf("%d",&f);
	printf("	To: ");
	scanf("%d",&t);	
	
	
	printf("\nThe number set is:\n");
	while(f<=t){
		
		printf("%d\t",f);
		v=f;
		while(v>0){
			if(v%10==2)
				c=c+1;
			v=v/10;
					
		}		
		
					
		f=f+1;
	}
	
	printf("\n\nThe no of 2's in above range :%d",c);	
	
	return 0;
}

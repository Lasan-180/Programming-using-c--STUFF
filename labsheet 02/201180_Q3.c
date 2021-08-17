
//201180
//Q3

# include <stdio.h>

int main (){
	
	int m = 40;
	int n = 20;
	int o = 20;
	int p = 30;
	
	int a,b,c;
	
	a = (int)(m>n && m!=o);
	b = (int)(o>p || p!=20);
	c = (int)(!(m>n && m!=o));
	
	printf("\n %d \n", a);  // answer is 1
	printf("\n %d \n",b);   // answer is 1
	printf("\n %d \n",c);   // answer is 0
	
	
	
	
	return 0;	
	
}

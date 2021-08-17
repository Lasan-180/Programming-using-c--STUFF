
//201180
//Q4

# include <stdio.h>

int main(){
	
	char c = 'B';
	int i=3, j=3, k=3;
	double x=0.0, y=2.3;
	
	
	printf((i && j && k)? "True": "False");
	printf ("\n\n");
	
	printf((x || i && j-3)? "True": "False");
	printf("\n\n");
	
	printf((i<j && x<y)? "True": "False");
	printf("\n\n");
	
	printf((i<j || x<y)? "True": "False");
	printf("\n\n");
	
	printf(('A'<=c && c<='Z')? "True": "False");
	printf("\n\n");
	
	printf((c-1=='A' || c+1=='Z' )? "True": "False");
	
		
	return 0;
	
			
}

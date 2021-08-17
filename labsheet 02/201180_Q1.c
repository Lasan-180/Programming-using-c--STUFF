
//201180
//Q1

# include <stdio.h>

int main(){
	
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	
	
    float e,f,g,h;
	
	e = (a+b)/(c+d);  
	f = a+b/(c+d);   
	g = (a+b)/c+d;  
	h = a*b/c*d;   
	
	
	printf("\n Answer for (a+b)/(c+d) is : %.2f\n ",e);     // answer is 0.00
	printf("\n Answer for a+b/(c+d) is : %.2f\n ",f);       // answer is 1.00
	printf ("\n Answer for (a+b)/c+d is : %.2f\n ",g);      // answer is 5.00
	printf("\n Answer for a*b/c*d is : %.2f\n ",h);         // answer is 0.00
	
	return 0;
		
}

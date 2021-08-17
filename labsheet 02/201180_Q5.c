
//201180
//Q5

# include <stdio.h>
# include <math.h>

int main (){
	
	float x ,y;
	
	x = 1.3;
	int N = 5;
	
	// N th power of x = x*x*x......*x
	
	y = pow(x,N);
	
	printf("\n%dth power of %.1f is : %f",N,x,y);
	
		
	return 0;	
	
}


//201180
//Q7

# include <stdio.h>

int main (){
	
	float x, y, z, surface_area;
	int outer_radius, inner_radius;
	
	x = 3.14;
	outer_radius = 7;
	inner_radius = 5;
	
	//Area of outer disk	
	y = x*outer_radius*outer_radius;
	
	//Area of inner disk
	z = x*inner_radius*inner_radius;
	
	surface_area = y-z;
	
	printf("\n Surface area is : %f", surface_area);
	
	
	return 0;
	
		
}

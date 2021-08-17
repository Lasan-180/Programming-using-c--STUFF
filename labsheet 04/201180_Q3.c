//201180
//Q3

#include <stdio.h>

int surface(int len1);
int volumn (int len2);

int main (){
	
	int len;
	
	printf("\nEnter the length of a side: ");
	scanf("%d",&len);
	
	printf("\nThe surface area of the cube is : %d",surface(len));
	
	printf("\nThe volumn of the cube is : %d",volumn(len));
	
	return 0;
		
}

int surface(int len1){
	
	int suf = len1*len1*6;
	return suf;
	
	
}

int volumn (int len2){
	
	int vol = len2*len2*len2;
	return vol;
	
}

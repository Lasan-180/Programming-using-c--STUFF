//201180
//Q4

#include <stdio.h>

void predict_programm(float R,int OVE);
int t=20;

int main (){
	
	float rr;
	int overs;
	
	printf("\n");
	printf(" Enter the current run rate per over: ");
	scanf("%f",& rr);
	printf(" Enter number of overs played : ");
	scanf("%d",& overs);
	printf("\n");
		
	predict_programm(rr,overs);
	return 0;

}

void predict_programm(float R,int OVE){
	
	float high_rr,p_score,c_score;

	
	c_score=R*OVE;                          //find current score
	p_score = (R*(t-OVE))+c_score;          //fing projective score
	high_rr= p_score/t;                    // find highest rate
		
	printf("\n Projected score for current run rate is %.2f",p_score);
	printf("\n Highest run rate of whole inning is %.2f per over",high_rr);
	
	
	
}

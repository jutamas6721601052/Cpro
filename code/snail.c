#include <stdio.h>
int main(){
	float day_odd=2.63;
	float day_even=-0.28;
	float height,distance;
	int day=7,check;
	int countdays=day;
	printf("Please specify if the snail fell all the way to the bottom of the pit (1) or somewhere in between (2)\n");
	mistake:
	printf(": ");
	scanf("%d",&check);
	if(check==1){
	do{
		printf("Enter the height of the cliff the snail fell from (cm): ");
		scanf("%f",&height);
	}while(height<0);
	}
	else if(check==2){
		printf("Enter the distance from the top of the pit to the snail position is (cm): ");
		scanf("%f",&height);
	} else goto mistake;
	if(day%2==1)
	distance=((day/2)+1)*day_odd+(day/2)*day_even;
	else distance=((day/2))*day_odd+(day/2)*day_even;
	printf("In seven days, the snail can move%.2f cm.\n",distance);
	while(distance<=height){
		countdays++;
		 if(countdays%2==1)
		 	distance+=day_odd;
		 else distance+=day_even;
	}
	printf("The snail tales %d days to climb up the cliff.\n",countdays);
}

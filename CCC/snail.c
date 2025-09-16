#include <stdio.h>
int main(){
	float day_odd=2.63;
	float day_even=-0.28;
	float high,distance;
	int day=7;
	int countdays=day;
	do{
		printf("pls input high :");
		scanf("%f",&high);
	}while(high<0);
	if(day%2==1)
	distance=((day/2)+1)*day_odd+(day/2)*day_even;
	else distance=((day/2))*day_odd+(day/2)*day_even;
	printf("%f",distance);
	while(distance<=high){
		countdays++;
		 if(countdays%2==1)
		 	distance+=day_odd;
		 else distance+=day_even;
	}
	printf("the snail must use count day is %d",countdays);
}

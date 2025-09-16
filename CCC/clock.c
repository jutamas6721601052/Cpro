#include <stdio.h>
int main(){
	int time_short,time_long;//time_short is hour, time_long is min
	printf("pls time : ");
	scanf("%d",&time_short);
	getchar();
	scanf("%d",&time_long);
	/*printf("time short is %d",time_short);
	printf("time long is %d",time_long);*/
	if(time_short>12)
	time_short-=12;
	printf("time in clock is%d\n",time_short);
	float degree_short=time_short*30+(time_long*0.5);
	float degree_long=time_long*6;
	printf("degree of short is : %.2f",degree_short);
	printf("degree of long is : %.2f",degree_long);
	// long on short
	float result;
	if(time_long/5>time_short){
	   result=(360-degree_short)-(360-degree_long);
	   result=-1*(result-360);
	}else result=(360-degree_long)-(360-degree_short);
	printf("\nthe degree of time o clock is %.2f",result);
}

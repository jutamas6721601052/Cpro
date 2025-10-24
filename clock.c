#include <stdio.h>
int main(){
	int hour,minute;
	float degree_short,degree_long;
	float result;
	char character;
	printf("The format to enter the time is HH:MM\n");
	do{
	printf("Enter the time you want to know the angle between the hour and minute hands : ");
	scanf("%d",&hour);
	scanf("%c",&character);
	scanf("%d",&minute);
	if(hour>24||minute>59)character=NULL;
	if(hour<0||minute<0) character=NULL;
	}while(character!=':');
	if(hour>12)
	hour-=12;
	degree_short=hour*30+(minute*0.5);
	degree_long=minute*6;
	printf("degree of hour hand is %.2f\n",degree_short);
	printf("degree of minute hand is %.2f",degree_long);
	if(minute/5<hour){
	   result=(360-degree_short)+degree_long;
	}else result=degree_long-degree_short;
	printf("\nThe angle between the hour hand and the minute hand is %.2f\n",result);
}

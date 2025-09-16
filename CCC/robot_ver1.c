#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	int move_x=0,move_y=0;
	char move;
	do{
	printf("pls input move :");
	scanf("%s",&move);
	   switch(move){
	   	case 'n':  move_y+=1; break;
	   	case 's':  move_y-=1; break;
	   	case 'w':  move_x-=1; break;
	   	case 'e':  move_x+=1; break;
	   	case 'N':  move_x-=1; move_y+=1; break;//nw
	   	case 'E':  move_x+=1; move_y+=1; break;//ne
	   	case 'W':  move_x-=1; move_y-=1; break;//sw
	   	case 'S':  move_x+=1; move_y-=1; break;//se
	   	default :
	   			printf("if you want exit from loop pls input 0\n");
	   		break;
	   }
	}while(move!='0');
	float distance=sqrt(pow(move_x,2)+pow(move_y,2));
	printf("%.2f",distance);
}

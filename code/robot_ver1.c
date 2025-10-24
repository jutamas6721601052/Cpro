#include <stdio.h>
#include <string.h>
#include <math.h>
void coordinate_point(int x,int y);
int main(){
	int move_x=0,move_y=0;
	int move;
	float distance=0,displacement;
    printf("If you want robot to move north, enter '8'.\n");
    printf("If you want robot to move south, enter '2'.\n");
    printf("If you want robot to move east, enter '6'.\n");
    printf("If you want robot to move west, enter '4'.\n");
    printf("If you want robot to move northeast, enter '9'.\n");
    printf("If you want robot to move northwest, enter '7'.\n");
    printf("If you want robot to move southeast, enter '3'.\n");
    printf("If you wantrobot to move southwest, enter '1'.\n");
    printf("To stop moving, Enter '0'.\n");
	do{
	printf("Enter robot direction of movement :");
	scanf("%d",&move);
	   switch(move){
	   	case 8:  move_y+=1; distance+=1; coordinate_point(move_x,move_y); break;
	   	case 2:  move_y-=1; distance+=1; coordinate_point(move_x,move_y); break;
	   	case 4:  move_x-=1; distance+=1; coordinate_point(move_x,move_y); break;
	   	case 6:  move_x+=1; distance+=1; coordinate_point(move_x,move_y); break;
	   	case 7:  move_x-=1; move_y+=1; distance+=2; coordinate_point(move_x,move_y); break;//nw
	   	case 9:  move_x+=1; move_y+=1; distance+=2; coordinate_point(move_x,move_y); break;//ne
	   	case 1:  move_x-=1; move_y-=1; distance+=2; coordinate_point(move_x,move_y); break;//sw
	   	case 3:  move_x+=1; move_y-=1; distance+=2; coordinate_point(move_x,move_y); break;//se
	   	//case 0:  exit;
	   	default :
	   			printf("To stop moving, enter '0'.\n");
	   		break;
	   }
	}while(move!=0);
	displacement=sqrt(pow(move_x,2)+pow(move_y,2));
	printf("The robot has moved a displacement of %.2f unit\n",displacement);
	printf("The robot has moved a distance of %.2f unit",distance);
}
void coordinate_point(int x,int y){
	printf("The robot is now at coordinate point(%d , %d)\n",x,y);
}

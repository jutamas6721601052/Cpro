#include <stdio.h>
#include <math.h>
int main(){
 float dough_width,dough_height;
 float dough_area;
 float mold_width,mold_y;
 float part_rectangle,part_circle;
 float mold_area;
 int count_bread=0;
 float box_area;
 char character;

printf("The format for entering the dough size is Width*Height\n");
 do{
	  printf("Enter the dough size : ");
	  scanf("%f",&dough_width);
	  scanf("%c",&character);
 	  scanf("%f",&dough_height);
 	  if(dough_width<0||dough_height<0) character=NULL;
	 }while(character!='*');
 dough_area=dough_width*dough_height;
 do{
	 printf("Enter the width of the mold : ");
	 scanf("%f",&mold_width);
	 printf("Enter the y of the mold : ");
 	 scanf("%f",&mold_y);
	 }while(mold_width<0||mold_y<0);
 part_rectangle=mold_y*mold_width;
 part_circle=M_PI*pow(mold_width/2,2);
 mold_area=part_rectangle+part_circle;
 box_area=mold_width*(mold_y+(mold_width/2));
 while(mold_area<dough_area){
	 dough_area-=mold_area;
	 count_bread++;
	 }
 printf("The number of breads that can be baked : %d \nand remaining dough that can't be molded : %.2f\n", count_bread*2,dough_area);
 printf("Box to Bread ratio : %.1f : %.1f\n",box_area,mold_area/2);
}

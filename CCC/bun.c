#include <stdio.h>
#include <math.h>
int main(){
 float flour_high,flour_wide;
 printf("pls input high of flour x wide of flour :");
 scanf("%f",&flour_high);
 getchar();
 scanf("%f",&flour_wide);
 float flour_area=flour_high*flour_wide;
 printf("%f",flour_area);
 float pim_x,pim_y;//pim_y is wide
 printf("pls input pim x :");
 scanf("%f",&pim_x);
 printf("pls input pim y :");
 scanf("%f",&pim_y);
 float part_square=pim_y*pim_x;
 printf("%f",part_square);
 float part_halfcircle=3.14*pow(pim_x/2,2);
 printf("%f",part_halfcircle);
 float pim_area=part_square+part_halfcircle;
 printf("%f",pim_area);
 float total_bun=0;
 int countbun=0;
 do{
 	total_bun+=pim_area;
 	countbun++;
 }while(total_bun<flour_area);
 float diff=flour_area-total_bun;
 if(diff<0){
 	total_bun-=pim_area;
 	countbun--;
 	diff=flour_area-total_bun;
 }
 printf("Number of buns: %d\n", countbun);
 printf("the ratio is %.2f:%.2f",diff,total_bun);
}

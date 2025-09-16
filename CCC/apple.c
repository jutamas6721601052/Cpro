#include <stdio.h>
#include <math.h>
int main(){
  float H,r_apple,r_beaker;
  float V_Wapple,V_apple;
  float result;
  printf("pls input high :");
  scanf("%f",&H);
  printf("pls input radius of apple :");
  scanf("%f",&r_apple);
  printf("pls input radius of beaker :");
  scanf("%f",&r_beaker);
  V_Wapple=3.14*pow(r_beaker,2)*((2*r_apple)+H);
  printf("%.2f\n",V_Wapple);
  V_apple=3.14*pow(r_apple,3)/3;
  printf("%.2f\n",V_apple);
  result=V_Wapple-V_apple;
  printf("The volume of water is %.2f unit",result);
  	
}

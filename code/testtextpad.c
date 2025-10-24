#include <stdio.h>
#include <math.h>
void main(){
	float density_apple,mass,r_apple;
	float r_beaker;
	float H,v_water;
	printf("pls input density of apple (kg/m^3):");
	scanf("%f",&density_apple);
	printf("pls input Mass of apple (kg):");
	scanf("%f",&mass);
	printf("pls input r of beaker (m):");
	scanf("%f",&r_beaker);
	printf("pls input r of apple (m):");
	scanf("%f",&r_apple);
	if(density_apple>1000){
		printf("\napple cant float.");
	}else if(density_apple==1000){
		H=2*r_apple;
		v_water=mass/density_apple;
		printf("Must use water %f m^3\nthe high of water is %f m",v_water,H);
	}else if(density_apple<1000){
		v_water=mass/1000;
		H=v_water/(M_PI*pow(r_beaker,2));
		printf("Must use water %f m^3\nthe high of water is %f m",v_water,H);
	}
}

#include <stdio.h>
#include <math.h>
void main(){
	float density_apple,volume_apple,r_apple;
	float r_beaker;	
	float H,v_water;
	printf("pls input density of apple :");
	scanf("%f",&density_apple);
	printf("pls input vplume of apple :");
	scanf("%f",&volume_apple);
	printf("pls input r of beaker :");
	scanf("%f",&r_beaker);
	printf("pls input r of apple :");
	scanf("%f",&r_apple);
	if(density_apple>1000){
		printf("\napple cant float.");	
	}else if(density_apple==1000){
		H=2*r_apple;
		v_water=H*(r_beaker*pow(3.14,2));
		printf("Must use water %f m^3\nthe high of water is %f m",v_water,H);
	}if(density_apple<1000){
		v_water=(density_apple/1000)*volume_apple;
		H=v_water/(r_beaker*pow(3.14,2));
		printf("Must use water %f m^3\nthe high of water is %f m",v_water,H);
	}
}

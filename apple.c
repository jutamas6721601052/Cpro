#include <stdio.h>
#include <math.h>
void main(){
	float density_apple,r_apple,r_beaker;
	float H,v_apple,v_displace;
	printf("Enter the density of the apple (kg/m^3):");
	scanf("%f",&density_apple);
	printf("Enter the radius of apple (m):");
	scanf("%f",&r_apple);
	printf("Enter the radius of beaker (m):");
	scanf("%f",&r_beaker);
	if(density_apple>1000){
		printf("\napple can't float.");
	}else if(density_apple<1000){
		v_apple=(4.0/3.0)*(M_PI*pow(r_apple,3));
		v_displace=(density_apple/1000)*v_apple;
		H=v_displace/(M_PI*pow(r_beaker,2));
	}else if(density_apple==1000){
		v_apple=(4.0/3.0)*(M_PI*pow(r_apple,3));
		v_displace=v_apple;
		H=v_displace/(M_PI*pow(r_beaker,2));
	}
	printf("The minimum volume of water must be more then needed to make the apple float is %.2f m^3 and The water height needed in the beaker is %.2f meters",v_displace,H);
}


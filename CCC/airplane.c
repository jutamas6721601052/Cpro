#include <stdio.h>
int main(){
	//apply
	int n;//wheel
    double area,pressure,weight;
    printf("if you want to know value what about pls input 0");
    //getchar();
    printf("\npls input n wheel :");
    scanf("%d",&n);
    printf("pls input area :");
    scanf("%lf",&area);
    printf("pls input pressure :");
    scanf("%lf",&pressure);
    printf("pls input weight :");
    scanf("%lf",&weight);
    if(weight==0){
    	weight=area*pressure*n;
    	printf("the value of weight is %.2f",weight);
	}else if(area==0){
		area=weight/(pressure*n);
		printf("the value of wheel area is %.2f",area);
	}else if(pressure==0){
	    pressure=weight/(area*n);
	    printf("the value of wheel pressur is %.2f",pressure);
	}else if(n==0){
		n=(int)(weight/(area*pressure));
		printf("count of wheel is %d",n);
	}
	//proposition
	int countwheel=18;
	double Area=1133,Weight=180883,Pressure;
	Pressure=Weight/(countwheel*Area);
	printf("the Pressure of wheel is %lf",Pressure);
}

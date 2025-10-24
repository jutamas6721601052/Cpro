#include <stdio.h>
int main(){
	int n;
    double area,pressure,weight;
    int countwheel=18;
    double Area=1133,Weight=180883,Pressure;
    printf("Enter 0 for the value you want to find,\nFor example if you Enter the pressure of each wheel as 0 : ");
	Pressure=Weight/(countwheel*Area);
	printf("The Pressure of each wheel : %lf",Pressure);
    do{
	printf("\nEnter the number of airplane wheels : ");
    scanf("%d",&n);
    printf("Enter the contact area of each wheel : ");
    scanf("%lf",&area);
    printf("Enter the pressure of each wheel : ");
    scanf("%lf",&pressure);
    printf("Enter the weight of the airplane : ");
    scanf("%lf",&weight);
    }while(n<0||area<0||pressure<0||weight<0);
    if(weight==0){
    	weight=area*pressure*n;
    	printf("The weight of airplane : %.2f",weight);
	}else if(area==0){
		area=weight/(pressure*n);
		printf("The contact area of each wheel : %.2f",area);
	}else if(pressure==0){
	    pressure=weight/(area*n);
	    printf("The pressure of each wheel : %.2f",pressure);
	}else if(n==0){
		n=(int)(weight/(area*pressure));
		printf("The total number of airplane wheel : %d",n);
	}


}

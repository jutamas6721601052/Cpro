#include <stdio.h>
#include <string.h>
#include <time.h>
float discount(float day_use,float price);
float total1(float day_use,float total);
float print_price(float price);
int boolean(char (*store)[10],char *nam));
struct user_Input{
	int hour,minute;
	int day,month,year;
	char store[100];
	float price;
};
float discount(float day_use,float price){
		 if(day_use>price/2){
	    	day_use-=(price/2);
			printf("Amount to pay %.2f Baht\n",price/2);
		}else{
			printf("Amount to pay %.2f Baht\n",price-day_use);
			day_use=0;
		     }
		 printf("The amount you can use today is %.2f Baht\n",day_use);
	return day_use;
	}
float total1(float day_use,float total){
	if(day_use<150) total-=(150-day_use);
		else total-=day_use;
		if(total>=150) day_use=150;
		else day_use=total;
		  printf("The remain amount for the entire program is %.2f Baht\n",total);   
	return total;
}
void main(){
	char store[10][10]={"Pa.tuk","KU_Store","shontong","KPS888","KPS_store","7-eleven","Kingeng","Ramen","Shop_KU","Mumtong"};
	char name[10];
	struct user_Input user_1;
	float day_use;
	float total=3000;
	float price;
	int count_inactive=0,active;
	int day=1,month=7;
	char character;
	do{
        do{
			printf("Do you want to use the 'Khon La Khrueng' Yes(1) or No(2): ");
			scanf("%d",&active);
			}while(active!=1&&active!=2);
		if(active==1){
			if(count_inactive>0) count_inactive=0;
			user_active:
			 do{
				printf("Enter the current Day : ");
				scanf("%d",&user_1.day);
				printf("Enter the current Month : ");
				scanf("%d",&user_1.month);
				printf("Enter the current Year : ");
	         	scanf("%d",&user_1.year);
	         	if(user_1.month!=7&&user_1.month!=8) user_1.day=0;
	         	if(user_1.year!=2568) user_1.day=0; 
				 }while(user_1.day<1||user_1.day>31);
				
			 do{
				 printf("Enter the current time ,The format for entering the time is HH.MM : ");
				 scanf("%d",&user_1.hour);
				 scanf("%c",&character);
				 scanf("%d",&user_1.minute);
				 if(user_1.hour<0||user_1.minute<0) character=NULL;
				 if(user_1.hour>24||user_1.minute>59) character=NULL;
				 }while(character!='.');
			if(user_1.hour>=6&&user_1.hour<=23){
			if(month==user_1.month){
			    if(day!=user_1.day){
					day=user_1.day;
					do{
						printf("Enter the price of thee product you want to buy : ");
						scanf("%f",&price);
		              }while(price<0);
		            printf("%.2f\n",price);
		            if(total>=150)
					day_use=discount(150,price);
					else day_use=discount(total,price);
					total=total1(day_use,total);
				}else{
					do{
						printf("Enter the price of thee product you want to buy : ");
						scanf("%d",&price);
		              }while(price<0);
					day_use=discount(day_use,price);
					total=total1(day_use,total);
					}
		}/*else {
			
			}*/
			}else{
			printf("Outside operating hours. Please try again during operating hours.\n"); goto user_active;
			}
			
		}else
		count_inactive++;
	    if(count_inactive>=14) break;
	}while(1);
	if(count_inactive>=14)
	printf("You can't no longer use the 'Khon La Khrueng' because your account has been inactive foe 14 days");
	else printf("success!!");
}


#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
float discount(float day_use,float price,float total);
float total1(float day_use,float total,float day_use2);
int boolean(char (*store)[10],char *name);
float print_price(float price);
struct user_Input{
	int hour,minute;
	int day,month,year;
	char store[100];
	float price;
};
void main(){
	char store[10][10]={"Pa.tuk","KU_Store","shontong","KPS888","KPS_store","7-eleven","Kingeng","Ramen","Shop_KU","Mumtong"};
	char name[10];
	struct user_Input user_1;
	float day_use=150,day_use2;
	float total=3000;
	float price;
	int count_inactive=0,active;
	int day=1,month=7;
	char character;
	int i;
	do{
        do{
			printf("Do you want to use the 'Khon La Khrueng' Yes(1) or No(2): ");
			scanf("%d",&active);
			}while(active!=1&&active!=2);
		if(active==1){
			if(count_inactive>0) count_inactive=0;
			user_active:
			 do{
				printf("\nEnter the current Day : ");
				scanf("%d",&user_1.day);
				printf("Enter the current Month : ");
				scanf("%d",&user_1.month);
				printf("Enter the current Year : ");
	         	scanf("%d",&user_1.year);
	         	if(user_1.month!=7&&user_1.month!=8) user_1.day=0;
	         	if(user_1.year!=2568) user_1.day=0;
				 }while(user_1.day<1||user_1.day>31);
				if(month==user_1.month){
					if(day>user_1.day){
					printf("Data entry ERROR, enter retry\n"); goto user_active;
					}
					}else if(month>user_1.month){
					printf("Data entry ERROR, enter retry\n"); goto user_active;
					}
				if(user_1.month==month){
					if(user_1.day-day>=14){
									 count_inactive=14;
									 break;
				}
				}else {
					if((31-day)+user_1.day>=14){
						count_inactive=14; break;
						}
			    }
			 do{
				 printf("Enter the current time ,The format for entering the time is HH.MM : ");
				 scanf("%d",&user_1.hour);
				 scanf("%c",&character);
				 scanf("%d",&user_1.minute);
				 if(user_1.hour<0||user_1.minute<0) character=NULL;
				 if(user_1.hour>24||user_1.minute>59) character=NULL;
				 }while(character!='.');
			printf("==========================================================================\n");
			mistake_name:
			if(user_1.hour>=6&&user_1.hour<23){
			if(7==user_1.month||8==user_1.month){
				printf("Name store you can use 'Khon La Khrueng'\n");
				for(i=0;i<10;i++){
      				printf("%s\n",*(store+i));
					}
				printf("Enter the name of the shop you want to use : ");
				scanf("%s",&name);
				if(boolean(&store,&name)){
					if(day!=user_1.day){
					day=user_1.day;
					price=print_price(price);
		           	if(total>=150){
		           		day_use2=150; day_use=discount(150,price,total);
					   }
					else{
						day_use2=day_use; day_use=discount(total,price,total);
					}
					total=total1(day_use,total,day_use2);
				}else{
					price=print_price(price);
		            day_use2=day_use;
					day_use=discount(day_use,price,total);
					total=total1(day_use,total,day_use2);
					}
				}else{
					printf("This shop is not participating in the program.Do you want to continue yes(1) or no(other number) : ");
					scanf("%d",&active);
					day=user_1.day;
					if(active==1){
					    price=print_price(price);
					    if(day!=user_1.day){
							if(total>=150)
							day_use=discount(150,price,0);
						    else day_use=discount(total,price,0);
							}else{
							     if(total>=150)
								 day_use=discount(day_use,price,0);
						        else day_use=discount(total,price,0);
								}
					}else goto mistake_name;
				}
		}if(total==0) break;
			}else{
			printf("Outside operating hours. Please try again during operating hours.\n"); goto user_active;
			printf("=====================================================================================\n");
			}
		printf("\nIf you want to EXIT the program enter 0 but If you want to continue programe enter other number: ");
		scanf("%d",&active);
		printf("=====================================================================================\n");
		if(active==0) break;
		else{
			continue;
			printf("=====================================================================================\n");
		}
		}else count_inactive++;
	    if(count_inactive>=14) break;
	}while(1);
	if(count_inactive>=14)
	printf("You can't no longer use the 'Khon La Khrueng' because your account has been inactive foe 14 days\n");
	else printf("SUCCESS!!");
}
float discount(float day_use,float price,float total){
	     if(total!=0){
		 if(day_use>price/2){
	    	day_use-=(price/2);
			printf("\nAmount to pay %.2f Baht\n",price/2);
		}else{
			printf("\nAmount to pay %.2f Baht\n",price-day_use);
			day_use=0;
		     }
		}else printf("\nAmount to pay %.2f Baht\n",price);
		 printf("The amount you can use today is %.2f Baht\n",day_use);
	return day_use;
	}
float total1(float day_use,float total,float day_use2){
	if(day_use<150) total-=(day_use2-day_use);
		else total-=day_use;
		if(total>=150) day_use=150;
		else day_use=total;
		  printf("The remain amount for the entire program is %.2f Baht\n",total);
	return total;
}
int boolean(char (*store)[10],char *name){
	int boolean;
	int i;
	for(i=0;i<10;i++){
		boolean=strcmp(*(store+i),name);
		if(boolean==0) return 1;
		else continue;
	}
	return 0;
}
float print_price(float price){
	do{
						printf("Enter the price of thee product you want to buy : ");
						scanf("%f",&price);
		              }while(price<0);
	return price;
}
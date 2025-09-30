#include <stdio.h>
#include <string.h>
struct user_Input{
	int time_short,time_long;
	int day;
	char store[100];
	float price;
};
void main(){
	struct user_Input user1;
	int total=3000,day_use;
	float discoount=0;
	int count=0,regis;
	int day;
	user1.day=1;
	do{ 
	    if(count>=14) break;
		printf("pls in put day now to check day :");
	    scanf("%d",&day);
	    if(day!=user1.day){
	    	if(day_use>0) total-=(150-day_use);
	    	else total-=day_use;
	    	if(total>=150) day_use=150;
	    	else day_use=total;
		}
	    else day_use=day_use;
		printf("Do you want to register \npls input 1 yes ,2 No :");
		scanf("%d",&regis);
		if(regis==1){
		count=0;
		printf("input day :");
		scanf("%d",&user1.day);
		printf("pls input time to check :");
		scanf("%d",&user1.time_short);
		getchar();
		scanf("%d",&user1.time_long);
		if((user1.time_short<6)){
			printf("pls use time requir"); continue;
		}else {
			printf("pls input name store to check :");
			//gets(user1.store);
			scanf("%s",user1.store);
			if(strcmp(user1.store, "kasetsart") == 0){
				printf("Pls input price :");
				scanf("%f",&user1.price);
				if(user1.price>=(day_use*2)){
					user1.price-=day_use; 
					printf("\nprice you pay self is %ã2f",user1.price);
					break;
				}else{
					day_use=user1.price/2;
					user1.price-=day_use;
					printf("\nprice you pay self is %.2f",user1.price);
				}
			}else{
				printf("pls input name store in kon lakik\n"); continue;
			}
		}
		}else{
			 count++;
		}
	}while(1);
	if(count>=14)
	printf("you cant use kon lakik again\nThankyou");
	else printf("success!!");
}

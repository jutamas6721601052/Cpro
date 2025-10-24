#include <stdio.h>
#include <string.h>
int main(){
	int lenght_sen,lenght_word;
	printf("lenght_sen : ");
	scanf("%d",&lenght_sen);
	char sen[lenght_sen];
	printf("pls input sentense : ");
	getchar();
	gets(sen);
	printf("lenght_word : ");
	scanf("%d",&lenght_word);
	char word[lenght_word];
	printf("pls input word : ");
	getchar();
	gets(word); 
	char *found=strstr(sen,word);
	if(found!=NULL){
		printf("found %s",word);
	}else printf("not found");
}


#include <stdio.h>
#include <string.h>
void main(){
	char sen[1000];
	char word[20];
	int lengthsen,lengthword;
	int find=0,count=0;
	int i,j;
	printf("pls input sentence :");
	gets(sen);
	printf("pls input word :");
	gets(word);
	lengthsen=strlen(sen);
	lengthword=strlen(word);
	for(i=0;i<lengthsen;i++){
		if(find==lengthword)
		break;
		else count++;
		for(j=0;j<lengthword;j++){
			if(sen[i]==word[j+find]){
				find++;
				break;
			}else find=0;
		}
	}
	if(find==lengthword){
		printf("have the word insentence and leave is %d",count-find+1);
	}else printf("dont find word");
}

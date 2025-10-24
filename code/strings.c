#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main(){
	char text[1000];
	char word[20];
	int length_text,length_word;
	int match=0;
	int i,j;
	printf("Enter the text you want to search for : ");
	gets(text);
	printf("Enter the word you want to search for in the text : ");
	gets(word);
	length_text=strlen(text);
	length_word=strlen(word);

	for(i=0;i<length_text;i++){
		if(match==length_word)
		break;
		for(j=0;j<length_word;j++){
			if(tolower(text[i])==tolower(word[j+match])){
				match++;
			}else match=0 ;
			break;
		}
	}
	if(match==length_word){
		printf("Found [%s] in the text at the position %d",word,(i+1)-match);
	}else printf("Do not found the word in the text");
}

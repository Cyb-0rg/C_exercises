#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	FILE * fp1;
	
	printf("how many times does each character appears in a plain text from text.txt\n");
	char okunan, ch='a';
	//printf("%c\n", ch-32);
	int counter=0;
	for ( ; ch<='z'; ch++){
		
		fp1= fopen("folder/text.txt", "r");
		okunan = fgetc(fp1);
		
		while (okunan!= EOF){
			if (okunan== ch || okunan== ch-32){
				counter++;	
		}
		okunan= fgetc(fp1);
		}
		
		printf("%c == %d\n", ch, counter);
		fclose(fp1);
		counter=0;
	}
		
	fclose(fp1);
}


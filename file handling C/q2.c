#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	FILE * fp1, *fp2;
	
	fp1= fopen("folder/text.txt", "r");
	fp2= fopen("folder/replaced.txt", "w");
	
	char okunan, aranan, girilen;
	okunan = fgetc(fp1);
	
	printf("which two characters do you want to exchange?\n");
	scanf("%c &  %c", &aranan, &girilen);
	
	
	int counter=0;
	while (okunan != EOF){
		if (okunan== aranan){
			fputc(girilen, fp2);
			counter++;
		}
		else {
			fputc(okunan, fp2);
		}
		okunan= fgetc(fp1);
	}
	
	printf("in doc 'replaced.txt' character <%c> was replaced by <%c>, %d times \n", aranan, girilen, counter);
	
	fclose(fp1);
	fclose(fp2);
}


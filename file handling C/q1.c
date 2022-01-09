#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	FILE * fp1;
	
	fp1= fopen("folder/text.txt", "r");
	//fp2= fopen("folder/pasted.txt", "w");
	
	char okunan, aranan;
	okunan = fgetc(fp1);
	
	printf("which character do you want to be counted?");
	scanf("%c", &aranan);
	
	int counter=0;
	while (okunan != EOF){
		if (okunan== aranan){
			counter++;
		}
		okunan= fgetc(fp1);
	}
	
	printf("character <%c> was found %d times \n", aranan, counter);
	
	fclose(fp1);
	//fclose(fp2);
}


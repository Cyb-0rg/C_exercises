#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	FILE * fp1, *fp2;
	
	fp1= fopen("text.txt", "w");
	fp2= fopen("pasted.txt", "r");
	
	char okunan;
	okunan = fgetc(fp1);
	
	printf("%c", okunan);
	
	//fputs("abd", fp1);
	
	fclose(fp1);
	fclose(fp2);
}


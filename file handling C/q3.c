#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	FILE * fp1, * fp2;
	
	fp1= fopen("folder/text.txt", "r");
	fp2= fopen("folder/pasted.txt", "w");
	
	char okunan;
	okunan = fgetc(fp1);
	
	while (okunan != EOF){
		fputc(okunan, fp2);
		okunan= fgetc(fp1);
	}
	
	printf("file copied to paste.txt\n");
	
	fclose(fp1);
	fclose(fp2);
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void encryption(FILE *fp1,FILE *fp2){
	char okunan, okunanEncrpt;
	okunan = fgetc(fp1);
	
	
	while (okunan != EOF){
		if (1){
			okunanEncrpt= ((int) okunan ) + 13;
			fputc(okunanEncrpt, fp2);
			
		}
		
		okunan= fgetc(fp1);
	}
	
	printf("file encryption was successful \n<check file encrypted.txt>\n\n\n");
	

}

void decryption(FILE *fp1,FILE * fp2){
	
	char okunan, okunanDecrpt;
	okunan = fgetc(fp1);
	
	while (okunan != EOF){
		if (1){
			okunanDecrpt= ((int) okunan ) - 13;
			fputc(okunanDecrpt, fp2);
			
		}
		
		okunan= fgetc(fp1);
	}
	printf("file decryption was successful \n<check file decrypted.txt>\n\n");
	
}

int main(){
	FILE * fp1, *fp2;
	
	fp1= fopen("folder/file.txt", "r");
	fp2= fopen("folder/encrypted.txt", "w");
	
	if (fp1== NULL){
		printf("the directory couldn't be found\n");
		exit(1);
	}
	else{
		encryption(fp1, fp2);
	}
	
	
	fclose(fp1);
	fclose(fp2);
	
	
	sleep(3);
	printf("reDecryption is processing");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".\n");
	sleep(1);
	printf("\n\n");
	
	
	
	fp2= fopen("folder/decrypted.txt", "w");
	fp1= fopen("folder/encrypted.txt", "r");
	
	if (fp1== NULL){
		printf("the directory couldn't be found\n");
		exit(1);
	}
	else{
		decryption(fp1, fp2);
	}
	
	fclose(fp1);
	fclose(fp2);
}


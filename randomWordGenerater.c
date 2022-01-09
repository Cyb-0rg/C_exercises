#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
//#include <dos.h>

int GenerateRandomWord(int size){
    
    char *pvowels= "aeiou";
    char *pconsonant= "bcdfjklmnpqrstvwxyz";
    
    srand(time(NULL));
    
    int i;
    for (i=0; i<size; i++){
    
        if(i%2==0){ 
            printf("%c", pconsonant[rand()%19  ]);
        }
        
        else {
            printf("%c", pvowels[rand()%5  ]);
        }
    }
}

int main()

{
    int size;
    printf("enter the size of the word  ");
    scanf("%d", &size);
    
    while (size >255) {
        printf("size of the word should not exceed 255 \n");
        printf("enter the size  ");
        scanf("%d", &size);
    }
    
    int i;
    for(i=0; i<10; i++){
        GenerateRandomWord(size);
        sleep(1);
        printf("\n");
    }
}




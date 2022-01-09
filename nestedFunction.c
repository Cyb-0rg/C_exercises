#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrayIterater(int dizi[],int count){
    int i;
    for( i=0; i<count; i++){
        printf("%d ", dizi[i]); 
    }
   
}

int randomNumberGenerator(int dizi[], int count) {
    srand(time(NULL));
    int i;
    for( i=0; i<count; i++){
       dizi[i]= 1+ rand()%9;
    }
    
}

int main()
{
   
    int count;
    printf("what should be the length of array?  ");
    scanf("%d", &count);
    
    
    int dizi[count];
    randomNumberGenerator(dizi, count);
    
    return arrayIterater(dizi, count);
}



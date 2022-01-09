#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int size( char *nesne){
    int sizeOFnesne=10;
    /*for (int i=0; i<10; i++){
    if (nesne[i]!= '\0') {
        sizeOFnesne++;
    }
    
    }
    //printf("%d", sizeOFnesne); */
    return sizeOFnesne;
}

void main()
{
    char word[20], focus[20];
    char *nesne[10]= {"kalem", "kitap", "kutuphane", "kitchen", "ketchap", "kelime", "kartal", "kopuzlar", "kanada","kitten"};
    int i, position, scoreCounter[size(*nesne)];
    int sizeOFnesne= size(*nesne);
    
    for(i=0; i<sizeOFnesne;i++){
        printf("nesne[%d]: %s\n", i,nesne[i]);
    }
    
    
    printf("\nbenzetmek istediginiz kelimeyi giriniz:\n");
    fgets(word,sizeof(word), stdin);
    //strcpy(word, "karpuz");
    
    
    ////
    int k;
    for (k=0; k<sizeOFnesne; k++){
        
        strcpy(focus, nesne[k]);
        printf("\n\n\n\n\n_____ %s _____\n", nesne[k]);
        scoreCounter[k]=0;
        printf("comparing %s with %s\n", nesne[k], word);
        for (i=0; i<strlen(word); i++){
        char *result= strchr(focus, word[i]);
            if (strchr(focus, word[i])){
            printf("%c - %c: ", word[i], word[i]);
            
            position=result-focus;
            if (position==i){
                printf("ayni konumda: 3puan\n");
                scoreCounter[k]+=3;
            }
            if (position-i==1 || position-i==-1){
                printf("bir sonraki konumda: 2puan\n");
                scoreCounter[k]+=2;
            }
            if (position-i>1 || position-i<-1){
                printf("ayni konumda degil: 1puan\n");
                scoreCounter[k]++;
            }
            
        }
    
    }
    
    printf(" >> benzerlik Skoru[%d]=%d", k,scoreCounter[k]);
    
    }
    
    int enbenzer=scoreCounter[0], enbenzerPosition=0;
    for (i =0; i< sizeOFnesne; i++){
        if (enbenzer<scoreCounter[i]){
            enbenzer=scoreCounter[i];
            enbenzerPosition=i;
        }
    }
    
    printf("\n\n\n_____ Raporu _____\n");
    printf("Verilen kosullara göre:-\n");
    printf("  En buyuk benzerlik skoru: %d ", enbenzer);
    printf("\n  En benzeyen kelime(ler): ", word);
    //int enbenzerTekrarlama[]=scoreCounter[0], enbenzerPositionTekrarlama[]=0;
    for (i =0; i< sizeOFnesne; i++){
        if (enbenzer==scoreCounter[i]){
            //enbenzerTekrarlama[i]=scoreCounter[i];
            //enbenzerPositionTekrarlama[i]=i;
            printf("\n      >>%s",nesne[i]);

        }
    }
    
    
} 
    





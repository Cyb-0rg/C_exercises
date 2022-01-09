#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define times 100

int main()
{
    int  i,j, die1[times], die2[times];
    srand(time(NULL));
    
    for (i=0; i<times; i++){
        die1[i]=1+rand()%6;
        die2[i]=1+rand()%6;
        //printf("die1[%d]=%d\n", i, die1[i]);
        //printf("die2[%d]=%d\n", i, die2[i]);
    }
    
    int Case[times][2];
    for (i=0; i<times; i++){
        
        Case[i][0]= die1[i];
        Case[i][1]= die2[i];
    }
    
    printf(" -------------\n");
    printf("| die1 | die2 |\n");
    printf(" -------------\n");
    for (i=0; i<times; i++){
        
        printf("| %2d   |   %2d |\n", Case[i][0], Case[i][1]);
    }
    printf(" -------------\n");
    
    if (times<=50){
    printf("\n\n");
    printf(" =========\n");
    int occurs[times]; 
    for (i=0; i<times; i++){
        occurs[i]= 0;
    }
    for(j=1; j<7; j++){
    for (i=0; i<times ; i++){
        if(Case[i][0]==j){
            printf("(%d,%d) ", Case[i][0], Case[i][1]);
            occurs[j]++;
        }
    }
    printf("\n\n");
    }
    printf(" =========\n");
    printf("\n\n");
    }
    
    /*
    printf("\n\n");
    printf(" -------------\n");
    printf("|case |occurs |\n");
    printf(" -------------\n");
    
    for (i=1; i<7; i++){
        for (j=1; j<7; j++){
            printf("|(%d,%d)|  %2d   |\n", i,j,0);
        }
    }
    */
    
    int a , b ;
    int FinalCounter[6][6]; 
    for (i=1; i<=6; i++){
        for (j=1; j<=6; j++){
        FinalCounter[i][j]= 0;}
    }
    printf("\n\n");
    printf(" -------------\n");
    printf(" Değerlendirme\n");
    printf(" -------------\n");
    
        for (a=1;a<7; a++){
            for (b=1;b<7; b++){
                for (i=0; i<times; i++){
                    
                if(a==die1[i] && b==die2[i]){
                FinalCounter[a][b]++;}
                }
                
                printf("(%d,%d) : %d Times\n",a,b, FinalCounter[a][b]);
            }
                printf("\n");
        }
        printf("Occured!");
    
    return 0;
}



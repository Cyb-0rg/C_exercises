#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i,j, a[10][10], count[10];
    for (i=0;i<10; i++){
        for (j=0;j<10; j++){
        a[i][j]=rand()%2;
        }
        count[i]=0;
    }
    
    for (i=0;i<10; i++){
        for (j=0;j<10; j++){
            printf("%3d", a[i][j]);
        }
        
        printf("\n");
    }
    
    for (i=0;i<10; i++){
        for (j=0;j<9; j++){
            if (a[i][j]==0 && a[i][j+1]==1){
                count[i]++;
            }
        }
    }
    printf("\n\n0 -> 1 occurence\n\n");
     for (i=0;i<10; i++){
         printf("line%d, %d Times\n",i+1,count[i]);
     }
    return 0;
}


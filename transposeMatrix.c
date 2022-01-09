#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i,j, a[5][5], b[5][5];
    for (i=0;i<5; i++){
        for (j=0;j<5; j++){
        a[i][j]=1+rand()%21;}
    }
    for (i=0;i<5; i++){
        for (j=0;j<5; j++){
            b[j][i]=a[i][j];
        }
    }
    for (i=0;i<5; i++){
        for (j=0;j<5; j++){
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    printf("  ------------------------\n");
    for (i=0;i<5; i++){
        for (j=0;j<5; j++){
            printf("%5d", b[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}

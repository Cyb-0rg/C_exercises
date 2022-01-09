#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n,m;
    printf("enter the size of matrix, rowXcolumn  ");
    scanf ("%d %d", &n,&m);
    if (n<m){
        int tem= m;
        m=n;
        n=tem;
    }
    int **array;
    array= malloc(sizeof(int*)*n);
    
    int i,j;
    for (i=0; i<n; i++){
        array[i]= malloc (sizeof(int)*m);
        
    }
 
    for ( i=0; i<n; i++){
        for ( j=0; j<m; j++){
            array[i][j]= 1+rand()%50;
            printf("  %2d " ,array[i][j]);
        }
        printf("\n");
    }
    
    int temp;
    for ( i=0; i<n; i++){
        for ( j=i; j<n; j++){
            temp= array[i][j];
            array[i][j]= array[j][i];
            array[j][i]= temp ;
        }
    }
    
    for ( i=0; i<n; i++){
        for ( j=0; j<(n/2); j++){
            temp= array[i][j];
            array[i][j]= array[i][n-1-j];
            array[i][n-1-j]= temp ;
            //printf("  %2d " ,array[i][j]);
        }
        
    }
    
    printf("\n\n\n");
    for ( i=0; i<m; i++){
        for ( j=0; j<n; j++){
            //array[i][j]= 1+rand()%50;
            printf("  %2d " ,array[i][j]);
        }
        printf("\n");
    }
    
    
}




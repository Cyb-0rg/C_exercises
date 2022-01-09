#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int  series[10], i, sum=0;
    float squared_mean,variance, deviation, mean, N=10;
    srand(time(NULL));
    
    for (i=0;i<N; i++){
        series[i]=1+rand()%50;
        printf("number_%d = %d\n", i+1, series[i]);
        sum+=series[i];
    }
   
    for (i=0;i<N; i++){
        squared_mean+=series[i]*series[i];
    }
    
    mean= sum/N;
    squared_mean/=N;
    variance=squared_mean-(mean*mean);
    
    
    printf("\n\n\t------------------\n");
    printf("\tsum= %d\n", sum);
    printf("\tmean= %.1f", mean);
    printf("\n\tvariance= %.3f", variance);
    printf("\n\tdeviation= %.3f", sqrt(variance));
    printf("\n\t------------------\n");
    return 0;
}





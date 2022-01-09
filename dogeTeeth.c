#include <stdio.h>

int main()
{
    int size;
    printf("enter the size\n");
    scanf("%d", &size);
    int spacing;
    int width=size ;
    int length=size ;
    int i,j;
    
    for(i=1; i<=size; i++){
        
            for(j=1; j<size*2; j++){
            if (j>width && j<length){
                printf(" ");
                
            }
            else {
                printf("*");
                
            }
            }
            spacing=2*(length-size)-1;
            
            if (length==size){printf("");}
            else {printf("%d",spacing);}
            
            width--;
            length++;
            
            printf("\n");
    }
    
    
    
    //printf("hey\n");
    
    return 0;
}


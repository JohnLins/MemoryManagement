#include <stdio.h>   
#include <stdlib.h> 
 
int main(void) 
{
    int *space = malloc(4*sizeof(int)); 
 

    space[0] = 4;
    space[1] = 9;
    space[2] = 2;
    space[3] = 1;
            
    printf("%d", space[0]);
    
 
    free(space);
}

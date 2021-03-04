#include <stdio.h> 
#include <stdlib.h> 

int main () { 
   int i, length; 
   int *values; 
   printf("length:"); 
   scanf("%d",&length); 

   values = (int*)calloc(length, sizeof(int));


 
   for( i=0 ; i < length; i++ ) { 
     printf("num: ");
     scanf("%d",&values[i]);
   }
     
   printf("numbers: ");
   for( i=0 ; i < length; i++ ) { 
     printf("%d ",values[i]); 
   } 
        
   free(values); 
        
        
   return(0); 
        
}




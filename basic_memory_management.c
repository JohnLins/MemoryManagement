#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   // allocate memory 
   int* list = malloc(sizeof(int)*2);
   list[0] = 1;
   list[1] = 2;
   printf("value: %d,  address: %p\n", list[0], &list);

   // reallocating memory
   list = (int*)realloc(list, 3);
   list[2] = 3;
   printf("value: %d,  address: %p\n", list[2], &list);

   // deallocate memory 
   free(list);
   
   return(0);
}

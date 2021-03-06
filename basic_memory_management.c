#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char *str;

   // allocate memory 
   str = (char *) malloc(4);
   strcpy(str, "John");
   printf("data: %s,  ram address: %u\n", str, str);

   // reallocating memory
   str = (char *) realloc(str, 9);
   strcat(str, " Lins");
   printf("data: %s,  ram address: %u\n", str, str);

   // deallocate memory 
   free(str);
   
   return(0);
}

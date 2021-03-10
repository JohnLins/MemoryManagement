#include <stdio.h>
#include <string.h>
 
typedef struct Vec {
   char name[100];
   float x;
   float y;
} Vec;
 
int main( ) {

   Vec mine;
 
   strcpy( mine.name, "John's Vector\n");
   mine.x = 6.0;
   mine.y = 2.4;
 
   printf(mine.name);
   printf("%f\n", mine.x);
   printf("%f\n", mine.y);

   return 0;
}

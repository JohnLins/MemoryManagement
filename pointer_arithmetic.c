#include <stdio.h>



int main () {

   int  arr[] = {5, 7, 3};

   int *ptr = arr;
  
   

      printf("address: %x\n", ptr);
      
      printf("value: %d\n", *ptr);
      
      ptr+=2;
      
      
      printf("address: %x\n", ptr);
      
      printf("value: %d\n", *ptr);
      
      ptr--;
      
      
      printf("address: %x\n", ptr);
      
      printf("value: %d\n", *ptr);
   
  
   return 0;
}

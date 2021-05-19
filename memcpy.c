#include <stdio.h> 

int main () 
{ 
  int a = 1;   
  int b = 2;   

  

  printf("a: %d\n", a); 
  printf("b: %d\n", b); 
  

  // copy a block of memory from one slot to another
  memcpy (&a, &b, sizeof(b)); 
  

  printf("a: %d\n", a); 
  printf("b: %d\n", b); 
  
  

  return 0; 
} 

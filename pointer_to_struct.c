#include <stdio.h> 
struct value_struct { 
  int value; 
}; 

int main() { 
  struct value_struct *value_ptr, value1; 
  
  value_ptr = &value1; 
  
  value_ptr->value = 8;
  printf("Value: %d", value_ptr->value); 
  return 0; 
 }

#include <stdio.h> 
struct value_struct { 
  int value; 
}; 

int main() { 
  struct value_struct *value_ptr, value1; 
  
  value_ptr = &value1; 
  
  value_ptr->value = 8;
  // same as (*value_ptr).value
  printf("Value: %d", value_ptr->value); 
  return 0; 
 }

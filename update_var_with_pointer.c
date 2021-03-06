#include <stdio.h>


int main()
{
  int a = 7;
  int *a_ptr = &a;
  *a_ptr = 9;
  
  printf("%x",*a_ptr);
  return 0;
}

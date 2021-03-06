#include <stdio.h>


int main()
{
  int a = 5;
  int *a_ptr = &a;
  int **a_ptr_ptr = &a_ptr;
  
  printf("%d\n", a);
  printf("%d\n", *a_ptr);
  printf("%d\n", **a_ptr_ptr);
  return 0;
}

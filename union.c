#include <stdio.h>

union Values {
   int a;
   float b;
   char c[50];
} values;  

int main()
{
  values.a = 5;
  printf("%d", values.a);
  return 0;
}

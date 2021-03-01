#include <stdio.h>
void func(int *x)
{
  *x = *x + 1;
}

int main()
{
  int v = 5;
  printf("%d\n", v);
  func(&v);
  printf("%d\n", v);
}
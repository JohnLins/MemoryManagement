#include <stdio.h>

int main()
{
  int a[] = {4, 7, 9, 10};
  int length = sizeof(a)/sizeof(a[0]);
  printf("%d", length);
  return 0;
}

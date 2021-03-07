#include <stdio.h>


int main()
{
  int ram[] = {};
  int *ptr = ram;
  for(int i = 0; i<100;i+=1){
    ptr++;
    printf("%d\n", *ptr);
  }
 
    return 0;
}

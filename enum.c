#include <stdio.h>

enum numbers {zero, one, two, three};

enum values {
  a = 7,
  b = 5,
  c = 1
} val;

int main()
{
    
    enum numbers num;
    num = two;
    printf("%d\n",num);
    
    
    val = a;
    printf("%d\n",val);
    
    return 0;
}

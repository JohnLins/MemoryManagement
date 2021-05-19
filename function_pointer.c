#include <stdio.h>

int mult(int x, int y){
  return x*y;
}

int add(int x, int y){
  return x + y;
}

typedef int (*myFuncPtrType)(int, int);

int applyFunc(int a, int b, myFuncPtrType z){
  return z(a, b);
}

int main()
{
  
  //you can treat this kind of like a Lambda func
  myFuncPtrType multPtr = mult;
  myFuncPtrType addPtr = add;
  
  printf("%d\n", applyFunc(5, 3, multPtr));
  
  printf("%d", applyFunc(7, 5, add));
  
  return 0;
}

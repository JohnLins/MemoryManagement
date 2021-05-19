#include <stdio.h>

int add(int a, int b) { 
   return a + b;
}

int mult(int a, int b){
  return a * b;
}

int arithThree(int (*f)(), int x) { 
   return (*f)(x, 3); 
}




int main(){
  
  
  printf("%d\n", arithThree(&add, 8));
  
  printf("%d", arithThree(&mult, 8));
  
  return 0;
}

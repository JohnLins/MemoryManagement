#include <stdio.h>

int tape[1000] = {};

int *ptr = tape;

#define UP ptr += 1;
#define DOWN ptr -= 1;
#define ADD *ptr += 1;
#define SUB *ptr -= 1;
#define OUT printf("%d\n", *ptr);


int main(){
  UP; UP; ADD; ADD; SUB; OUT;

  return 0;
}



/*
Or:
#include <stdlib.h>
#include <stdio.h>



#define UP ptr += 1;
#define DOWN ptr -= 1;
#define ADD *ptr += 1;
#define SUB *ptr -= 1;
#define OUT printf("%d\n", *ptr);


int main(){
  int *tape = malloc(1000*sizeof(int));

  int *ptr = tape;
  
  
  UP; UP; ADD; ADD; SUB; OUT;

  free(tape);
  return 0;
}
*/

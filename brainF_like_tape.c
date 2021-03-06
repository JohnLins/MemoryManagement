
include <stdio.h>

int tape[] = {};

int *ptr = tape;

#define UP ptr += 1;
#define DOWN prr -= 1;
#define ADD *ptr += 1;
#define SUB *ptr -= 1;
#define OUT printf("%d\n", *ptr);





int main(){
  UP; UP; ADD; ADD; SUB; OUT;

  return 0;
}
